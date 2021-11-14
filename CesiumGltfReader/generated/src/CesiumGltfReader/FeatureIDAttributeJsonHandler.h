// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltfReader/FeatureIDsJsonHandler.h"
#include <CesiumGltf/FeatureIDAttribute.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>
#include <CesiumJsonReader/StringJsonHandler.h>

namespace CesiumJsonReader {
  class ExtensionReaderContext;
}

namespace CesiumGltfReader {
  class FeatureIDAttributeJsonHandler : public CesiumJsonReader::ExtensibleObjectJsonHandler {
  public:
    using ValueType = CesiumGltf::FeatureIDAttribute;

    static void populateExtensions(CesiumJsonReader::ExtensionReaderContext& context);

    FeatureIDAttributeJsonHandler(const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
    void reset(IJsonHandler* pParentHandler, CesiumGltf::FeatureIDAttribute* pObject);

    virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

  protected:
    IJsonHandler* readObjectKeyFeatureIDAttribute(const std::string& objectType, const std::string_view& str, CesiumGltf::FeatureIDAttribute& o);

  private:

    CesiumGltf::FeatureIDAttribute* _pObject = nullptr;
    CesiumJsonReader::StringJsonHandler _featureTable;
    FeatureIDsJsonHandler _featureIds;
  };
}
