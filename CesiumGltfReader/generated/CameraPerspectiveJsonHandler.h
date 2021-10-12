// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/CameraPerspective.h"
#include "CesiumJsonReader/DoubleJsonHandler.h"

#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>

namespace CesiumGltf {
class ExtensionReaderContext;

class CameraPerspectiveJsonHandler
    : public CesiumJsonReader::ExtensibleObjectJsonHandler {
public:
  using ValueType = CameraPerspective;

  CameraPerspectiveJsonHandler(
      const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
  void reset(IJsonHandler* pParentHandler, CameraPerspective* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyCameraPerspective(
      const std::string& objectType,
      const std::string_view& str,
      CameraPerspective& o);

private:
  CameraPerspective* _pObject = nullptr;
  CesiumJsonReader::DoubleJsonHandler _aspectRatio;
  CesiumJsonReader::DoubleJsonHandler _yfov;
  CesiumJsonReader::DoubleJsonHandler _zfar;
  CesiumJsonReader::DoubleJsonHandler _znear;
};
} // namespace CesiumGltf
