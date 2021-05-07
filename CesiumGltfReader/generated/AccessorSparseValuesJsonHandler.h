// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/AccessorSparseValues.h"
#include "CesiumGltf/ReaderContext.h"
#include "CesiumJsonReader/IntegerJsonHandler.h"
#include "ExtensibleObjectJsonHandler.h"

namespace CesiumGltf {
struct ReaderContext;

class AccessorSparseValuesJsonHandler : public ExtensibleObjectJsonHandler {
public:
  using ValueType = AccessorSparseValues;

  AccessorSparseValuesJsonHandler(const ReaderContext& context) noexcept;
  void reset(IJsonHandler* pParentHandler, AccessorSparseValues* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyAccessorSparseValues(
      const std::string& objectType,
      const std::string_view& str,
      AccessorSparseValues& o);

private:
  AccessorSparseValues* _pObject = nullptr;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _bufferView;
  CesiumJsonReader::IntegerJsonHandler<int64_t> _byteOffset;
};
} // namespace CesiumGltf
