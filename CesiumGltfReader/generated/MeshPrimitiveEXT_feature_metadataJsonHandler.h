// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/MeshPrimitiveEXT_feature_metadata.h"
#include "CesiumJsonReader/ArrayJsonHandler.h"
#include "CesiumJsonReader/StringJsonHandler.h"
#include "FeatureIDAttributeJsonHandler.h"
#include "FeatureIDTextureJsonHandler.h"

#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>

namespace CesiumGltf {
class ExtensionReaderContext;

class MeshPrimitiveEXT_feature_metadataJsonHandler
    : public CesiumJsonReader::ExtensibleObjectJsonHandler,
      public CesiumJsonReader::IExtensionJsonHandler {
public:
  using ValueType = MeshPrimitiveEXT_feature_metadata;

  static inline constexpr const char* ExtensionName = "EXT_feature_metadata";

  MeshPrimitiveEXT_feature_metadataJsonHandler(
      const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
  void reset(
      IJsonHandler* pParentHandler,
      MeshPrimitiveEXT_feature_metadata* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

  virtual void reset(
      IJsonHandler* pParentHandler,
      CesiumUtility::ExtensibleObject& o,
      const std::string_view& extensionName) override;

  virtual IJsonHandler* readNull() override {
    return CesiumJsonReader::ExtensibleObjectJsonHandler::readNull();
  };
  virtual IJsonHandler* readBool(bool b) override {
    return CesiumJsonReader::ExtensibleObjectJsonHandler::readBool(b);
  }
  virtual IJsonHandler* readInt32(int32_t i) override {
    return CesiumJsonReader::ExtensibleObjectJsonHandler::readInt32(i);
  }
  virtual IJsonHandler* readUint32(uint32_t i) override {
    return CesiumJsonReader::ExtensibleObjectJsonHandler::readUint32(i);
  }
  virtual IJsonHandler* readInt64(int64_t i) override {
    return CesiumJsonReader::ExtensibleObjectJsonHandler::readInt64(i);
  }
  virtual IJsonHandler* readUint64(uint64_t i) override {
    return CesiumJsonReader::ExtensibleObjectJsonHandler::readUint64(i);
  }
  virtual IJsonHandler* readDouble(double d) override {
    return CesiumJsonReader::ExtensibleObjectJsonHandler::readDouble(d);
  }
  virtual IJsonHandler* readString(const std::string_view& str) override {
    return CesiumJsonReader::ExtensibleObjectJsonHandler::readString(str);
  }
  virtual IJsonHandler* readObjectStart() override {
    return CesiumJsonReader::ExtensibleObjectJsonHandler::readObjectStart();
  }
  virtual IJsonHandler* readObjectEnd() override {
    return CesiumJsonReader::ExtensibleObjectJsonHandler::readObjectEnd();
  }
  virtual IJsonHandler* readArrayStart() override {
    return CesiumJsonReader::ExtensibleObjectJsonHandler::readArrayStart();
  }
  virtual IJsonHandler* readArrayEnd() override {
    return CesiumJsonReader::ExtensibleObjectJsonHandler::readArrayEnd();
  }
  virtual void reportWarning(
      const std::string& warning,
      std::vector<std::string>&& context =
          std::vector<std::string>()) override {
    CesiumJsonReader::ExtensibleObjectJsonHandler::reportWarning(
        warning,
        std::move(context));
  }

protected:
  IJsonHandler* readObjectKeyMeshPrimitiveEXT_feature_metadata(
      const std::string& objectType,
      const std::string_view& str,
      MeshPrimitiveEXT_feature_metadata& o);

private:
  MeshPrimitiveEXT_feature_metadata* _pObject = nullptr;
  CesiumJsonReader::
      ArrayJsonHandler<FeatureIDAttribute, FeatureIDAttributeJsonHandler>
          _featureIdAttributes;
  CesiumJsonReader::
      ArrayJsonHandler<FeatureIDTexture, FeatureIDTextureJsonHandler>
          _featureIdTextures;
  CesiumJsonReader::
      ArrayJsonHandler<std::string, CesiumJsonReader::StringJsonHandler>
          _featureTextures;
};
} // namespace CesiumGltf
