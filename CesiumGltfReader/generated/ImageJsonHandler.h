// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/Image.h"
#include "CesiumJsonReader/IntegerJsonHandler.h"
#include "CesiumJsonReader/StringJsonHandler.h"
#include "NamedObjectJsonHandler.h"

namespace CesiumGltf {
class ExtensionReaderContext;

class ImageJsonHandler : public NamedObjectJsonHandler {
public:
  using ValueType = Image;

  ImageJsonHandler(
      const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
  void reset(IJsonHandler* pParentHandler, Image* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyImage(
      const std::string& objectType,
      const std::string_view& str,
      Image& o);

private:
  Image* _pObject = nullptr;
  CesiumJsonReader::StringJsonHandler _uri;
  CesiumJsonReader::StringJsonHandler _mimeType;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _bufferView;
};
} // namespace CesiumGltf
