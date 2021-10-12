// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "MaterialNormalTextureInfoJsonHandler.h"
#include "MaterialOcclusionTextureInfoJsonHandler.h"
#include "MaterialPBRMetallicRoughnessJsonHandler.h"
#include "NamedObjectJsonHandler.h"
#include "TextureInfoJsonHandler.h"

#include <CesiumGltf/Material.h>
#include <CesiumJsonReader/ArrayJsonHandler.h>
#include <CesiumJsonReader/BoolJsonHandler.h>
#include <CesiumJsonReader/DoubleJsonHandler.h>
#include <CesiumJsonReader/StringJsonHandler.h>

namespace CesiumJsonReader {
class ExtensionReaderContext;
}

namespace CesiumGltf {
class MaterialJsonHandler : public NamedObjectJsonHandler {
public:
  using ValueType = Material;

  MaterialJsonHandler(
      const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
  void reset(IJsonHandler* pParentHandler, Material* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyMaterial(
      const std::string& objectType,
      const std::string_view& str,
      Material& o);

private:
  Material* _pObject = nullptr;
  MaterialPBRMetallicRoughnessJsonHandler _pbrMetallicRoughness;
  MaterialNormalTextureInfoJsonHandler _normalTexture;
  MaterialOcclusionTextureInfoJsonHandler _occlusionTexture;
  TextureInfoJsonHandler _emissiveTexture;
  CesiumJsonReader::
      ArrayJsonHandler<double, CesiumJsonReader::DoubleJsonHandler>
          _emissiveFactor;
  CesiumJsonReader::StringJsonHandler _alphaMode;
  CesiumJsonReader::DoubleJsonHandler _alphaCutoff;
  CesiumJsonReader::BoolJsonHandler _doubleSided;
};
} // namespace CesiumGltf
