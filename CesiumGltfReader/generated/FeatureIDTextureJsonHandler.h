// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "TextureAccessorJsonHandler.h"

#include <CesiumGltf/FeatureIDTexture.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>
#include <CesiumJsonReader/StringJsonHandler.h>

namespace CesiumJsonReader {
class ExtensionReaderContext;
}

namespace CesiumGltf {
class FeatureIDTextureJsonHandler
    : public CesiumJsonReader::ExtensibleObjectJsonHandler {
public:
  using ValueType = FeatureIDTexture;

  FeatureIDTextureJsonHandler(
      const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
  void reset(IJsonHandler* pParentHandler, FeatureIDTexture* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyFeatureIDTexture(
      const std::string& objectType,
      const std::string_view& str,
      FeatureIDTexture& o);

private:
  FeatureIDTexture* _pObject = nullptr;
  CesiumJsonReader::StringJsonHandler _featureTable;
  TextureAccessorJsonHandler _featureIds;
};
} // namespace CesiumGltf
