const fs = require("fs");
const getNameFromSchema = require("./getNameFromSchema");
const indent = require("./indent");
const lodash = require("lodash");
const path = require("path");
const resolveProperty = require("./resolveProperty");
const unindent = require("./unindent");

function generate(options, schema) {
  const { schemaCache, config, outputDir, readerOutputDir } = options;

  const name = getNameFromSchema(config, schema);
  const thisConfig = config.classes[schema.title] || {};

  console.log(`Generating ${name}`);

  let base = "ExtensibleObject";
  if (schema.allOf && schema.allOf.length > 0 && schema.allOf[0].$ref) {
    const baseSchema = schemaCache.load(schema.allOf[0].$ref);
    base = getNameFromSchema(config, baseSchema);
  }

  const required = schema.required || [];

  const properties = Object.keys(schema.properties)
    .map((key) =>
      resolveProperty(schemaCache, config, name, key, schema.properties[key], required)
    )
    .filter((property) => property !== undefined);

  const localTypes = lodash.uniq(
    lodash.flatten(properties.map((property) => property.localTypes))
  );

  const headers = lodash.uniq([
      `"CesiumGltf/Library.h"`,
      `"CesiumGltf/${base}.h"`,
      ...lodash.flatten(properties.map((property) => property.headers))
  ]);

  headers.sort();

  const header = `
        // This file was generated by generate-gltf-classes.
        // DO NOT EDIT THIS FILE!
        #pragma once

        ${headers.map((header) => `#include ${header}`).join("\n")}

        namespace CesiumGltf {
            /**
             * @brief ${schema.description}
             */
            struct CESIUMGLTF_API ${name}${thisConfig.toBeInherited ? "Spec" : (thisConfig.isBaseClass ? "" : " final")} : public ${base} {
                static constexpr const char* TypeName = "${name}";
                ${thisConfig.extensionName ? `static constexpr const char* ExtensionName = "${thisConfig.extensionName}";` : ""}

                ${indent(localTypes.join("\n\n"), 16)}

                ${indent(
                  properties
                    .map((property) => formatProperty(property))
                    .filter(propertyText => propertyText !== undefined)
                    .join("\n\n"),
                  16
                )}
                ${thisConfig.toBeInherited ? privateSpecConstructor(name) : ""}
            };
        }
    `;

  const headerOutputDir = path.join(outputDir, "include", "CesiumGltf");
  fs.mkdirSync(headerOutputDir, { recursive: true });
  const headerOutputPath = path.join(headerOutputDir, `${name}${thisConfig.toBeInherited ? "Spec" : ""}.h`);
  fs.writeFileSync(headerOutputPath, unindent(header), "utf-8");

  const readerHeaders = lodash.uniq(
    [
      `"CesiumGltf/ReaderContext.h"`,
      `"${base}JsonHandler.h"`,
      ...lodash.flatten(properties.map((property) => property.readerHeaders))
    ]
  );
  readerHeaders.sort();

  const readerLocalTypes = lodash.uniq(
    lodash.flatten(properties.map((property) => property.readerLocalTypes))
  );

  const readerHeader = `
        // This file was generated by generate-gltf-classes.
        // DO NOT EDIT THIS FILE!
        #pragma once

        ${readerHeaders.map((header) => `#include ${header}`).join("\n")}

        namespace CesiumGltf {
          struct ReaderContext;
          struct ${name};

          class ${name}JsonHandler : public ${base}JsonHandler${thisConfig.extensionName ? `, public IExtensionJsonHandler` : ""} {
          public:
            using ValueType = ${name};

            ${thisConfig.extensionName ? `static const char* ExtensionName;` : ""}

            ${name}JsonHandler(const ReaderContext& context) noexcept;
            void reset(IJsonHandler* pParentHandler, ${name}* pObject);

            virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

            ${thisConfig.extensionName ? `
            virtual void reset(IJsonHandler* pParentHandler, ExtensibleObject& o, const std::string_view& extensionName) override;

            virtual IJsonHandler* readNull() override {
              return ${base}JsonHandler::readNull();
            };
            virtual IJsonHandler* readBool(bool b) override {
              return ${base}JsonHandler::readBool(b);
            }
            virtual IJsonHandler* readInt32(int32_t i) override {
              return ${base}JsonHandler::readInt32(i);
            }
            virtual IJsonHandler* readUint32(uint32_t i) override {
              return ${base}JsonHandler::readUint32(i);
            }
            virtual IJsonHandler* readInt64(int64_t i) override {
              return ${base}JsonHandler::readInt64(i);
            }
            virtual IJsonHandler* readUint64(uint64_t i) override {
              return ${base}JsonHandler::readUint64(i);
            }
            virtual IJsonHandler* readDouble(double d) override {
              return ${base}JsonHandler::readDouble(d);
            }
            virtual IJsonHandler* readString(const std::string_view& str) override {
              return ${base}JsonHandler::readString(str);
            }
            virtual IJsonHandler* readObjectStart() override {
              return ${base}JsonHandler::readObjectStart();
            }
            virtual IJsonHandler* readObjectEnd() override {
              return ${base}JsonHandler::readObjectEnd();
            }
            virtual IJsonHandler* readArrayStart() override {
              return ${base}JsonHandler::readArrayStart();
            }
            virtual IJsonHandler* readArrayEnd() override {
              return ${base}JsonHandler::readArrayEnd();
            }
            virtual void reportWarning(const std::string& warning, std::vector<std::string>&& context = std::vector<std::string>()) override {
              ${base}JsonHandler::reportWarning(warning, std::move(context));
            }
            ` : ""}

          protected:
            IJsonHandler* readObjectKey${name}(const std::string& objectType, const std::string_view& str, ${name}& o);

          private:
            ${indent(readerLocalTypes.join("\n\n"), 12)}

            ${name}* _pObject = nullptr;
            ${indent(
              properties
                .map((property) => formatReaderProperty(property))
                .join("\n"),
              12
            )}
          };
        }
  `;

  const readerHeaderOutputDir = path.join(readerOutputDir, "generated");
  fs.mkdirSync(readerHeaderOutputDir, { recursive: true });
  const readerHeaderOutputPath = path.join(readerHeaderOutputDir, name + "JsonHandler.h");
  fs.writeFileSync(readerHeaderOutputPath, unindent(readerHeader), "utf-8");

  const readerLocalTypesImpl = lodash.uniq(
    lodash.flatten(properties.map((property) => property.readerLocalTypesImpl))
  );

  const readerHeadersImpl = lodash.uniq(
    [...lodash.flatten(properties.map((property) => property.readerHeadersImpl))]
  );
  readerHeadersImpl.sort();

function generateReaderOptionsInitializerList(properties, varName) {
    const initializerList = properties
      .filter(p => p.readerType.toLowerCase().indexOf("jsonhandler") != -1)
      .map(p => `_${p.name}(${p.schemas && p.schemas.length > 0 ? varName : ""})`)
      .join(", ");
    return initializerList == "" ? "" : ", " + initializerList;
}
  const readerImpl = `
        // This file was generated by generate-gltf-classes.
        // DO NOT EDIT THIS FILE!
        #include "${name}JsonHandler.h"
        #include "CesiumGltf/${name}.h"
        ${readerHeadersImpl.map((header) => `#include ${header}`).join("\n")}
        #include <cassert>
        #include <string>

        using namespace CesiumGltf;

        ${thisConfig.extensionName ? `const char* ${name}JsonHandler::ExtensionName = "${thisConfig.extensionName}";` : ""}

        ${name}JsonHandler::${name}JsonHandler(const ReaderContext& context) noexcept : ${base}JsonHandler(context)${generateReaderOptionsInitializerList(properties, 'context')} {}

        void ${name}JsonHandler::reset(CesiumJsonReader::IJsonHandler* pParentHandler, ${name}* pObject) {
          ${base}JsonHandler::reset(pParentHandler, pObject);
          this->_pObject = pObject;
        }

        CesiumJsonReader::IJsonHandler* ${name}JsonHandler::readObjectKey(const std::string_view& str) {
          assert(this->_pObject);
          return this->readObjectKey${name}(${name}::TypeName, str, *this->_pObject);
        }

        ${thisConfig.extensionName ? `
        void ${name}JsonHandler::reset(CesiumJsonReader::IJsonHandler* pParentHandler, ExtensibleObject& o, const std::string_view& extensionName) {
          std::any& value =
              o.extensions.emplace(extensionName, ${name}())
                  .first->second;
          this->reset(
              pParentHandler,
              std::any_cast<${name}>(&value));
        }
        ` : ""}

        CesiumJsonReader::IJsonHandler* ${name}JsonHandler::readObjectKey${name}(const std::string& objectType, const std::string_view& str, ${name}& o) {
          using namespace std::string_literals;

          ${indent(
            properties
              .map((property) => formatReaderPropertyImpl(property))
              .join("\n"),
            10
          )}

          return this->readObjectKey${base}(objectType, str, *this->_pObject);
        }

        ${indent(readerLocalTypesImpl.join("\n\n"), 8)}
  `;

  const readerSourceOutputPath = path.join(readerHeaderOutputDir, name + "JsonHandler.cpp");
  fs.writeFileSync(readerSourceOutputPath, unindent(readerImpl), "utf-8");

  return lodash.uniq(
    lodash.flatten(properties.map((property) => property.schemas))
  );
}

function formatProperty(property) {
  if (!property.type) {
    return undefined;
  }

  let result = "";

  result += `/**\n * @brief ${property.briefDoc || property.name}\n`;
  if (property.fullDoc) {
    result += ` *\n * ${property.fullDoc.split("\n").join("\n * ")}\n`;
  }

  result += ` */\n`;

  result += `${property.type} ${property.name}`;

  if (property.defaultValue !== undefined) {
    result += " = " + property.defaultValue;
  } else if (property.needsInitialization) {
    result += " = " + property.type + "()";
  }

  result += ";";

  return result;
}

function formatReaderProperty(property) {
  return `${property.readerType} _${property.name};`
}

function formatReaderPropertyImpl(property) {
  return `if ("${property.name}"s == str) return property("${property.name}", this->_${property.name}, o.${property.name});`;
}

function privateSpecConstructor(name) {
  return `
    private:
      /**
       * @brief This class is not mean to be instantiated directly. Use {@link ${name}} instead.
       */
      ${name}Spec() = default;
      friend struct ${name};
  `;
}

module.exports = generate;
