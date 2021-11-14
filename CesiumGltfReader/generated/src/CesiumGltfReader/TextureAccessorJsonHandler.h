// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltfReader/TextureInfoJsonHandler.h"

#include <CesiumGltf/TextureAccessor.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>
#include <CesiumJsonReader/StringJsonHandler.h>

namespace CesiumJsonReader {
class ExtensionReaderContext;
}

namespace CesiumGltfReader {
class TextureAccessorJsonHandler
    : public CesiumJsonReader::ExtensibleObjectJsonHandler {
public:
  using ValueType = CesiumGltf::TextureAccessor;

  static void
  populateExtensions(CesiumJsonReader::ExtensionReaderContext& context);

  TextureAccessorJsonHandler(
      const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
  void
  reset(IJsonHandler* pParentHandler, CesiumGltf::TextureAccessor* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyTextureAccessor(
      const std::string& objectType,
      const std::string_view& str,
      CesiumGltf::TextureAccessor& o);

private:
  CesiumGltf::TextureAccessor* _pObject = nullptr;
  CesiumJsonReader::StringJsonHandler _channels;
  TextureInfoJsonHandler _texture;
};
} // namespace CesiumGltfReader
