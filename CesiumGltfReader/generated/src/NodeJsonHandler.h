// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "NamedObjectJsonHandler.h"

#include <CesiumGltf/Node.h>
#include <CesiumJsonReader/ArrayJsonHandler.h>
#include <CesiumJsonReader/DoubleJsonHandler.h>
#include <CesiumJsonReader/IntegerJsonHandler.h>

namespace CesiumJsonReader {
class JsonReaderOptions;
} // namespace CesiumJsonReader

namespace CesiumGltfReader {
class NodeJsonHandler : public CesiumGltfReader::NamedObjectJsonHandler {
public:
  using ValueType = CesiumGltf::Node;

  explicit NodeJsonHandler(
      const CesiumJsonReader::JsonReaderOptions& options) noexcept;
  void reset(IJsonHandler* pParentHandler, CesiumGltf::Node* pObject);

  IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyNode(
      const std::string& objectType,
      const std::string_view& str,
      CesiumGltf::Node& o);

private:
  CesiumGltf::Node* _pObject = nullptr;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _camera;
  CesiumJsonReader::
      ArrayJsonHandler<int32_t, CesiumJsonReader::IntegerJsonHandler<int32_t>>
          _children;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _skin;
  CesiumJsonReader::
      ArrayJsonHandler<double, CesiumJsonReader::DoubleJsonHandler>
          _matrix;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _mesh;
  CesiumJsonReader::
      ArrayJsonHandler<double, CesiumJsonReader::DoubleJsonHandler>
          _rotation;
  CesiumJsonReader::
      ArrayJsonHandler<double, CesiumJsonReader::DoubleJsonHandler>
          _scale;
  CesiumJsonReader::
      ArrayJsonHandler<double, CesiumJsonReader::DoubleJsonHandler>
          _translation;
  CesiumJsonReader::
      ArrayJsonHandler<double, CesiumJsonReader::DoubleJsonHandler>
          _weights;
};
} // namespace CesiumGltfReader
