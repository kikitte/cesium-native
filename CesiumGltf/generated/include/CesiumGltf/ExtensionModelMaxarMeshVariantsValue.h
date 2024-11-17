// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/Library.h"
#include "CesiumGltf/NamedObject.h"

#include <string>

namespace CesiumGltf {
/**
 * @brief An object defining a valid mesh variant
 */
struct CESIUMGLTF_API ExtensionModelMaxarMeshVariantsValue final
    : public CesiumGltf::NamedObject {
  static inline constexpr const char* TypeName =
      "ExtensionModelMaxarMeshVariantsValue";

  /**
   * @brief The name of the mesh variant
   */
  std::string name;

  /**
   * @brief Calculates the size in bytes of this object, including the contents
   * of all collections, pointers, and strings. This will NOT include the size
   * of any extensions attached to the object. Calling this method may be slow
   * as it requires traversing the object's entire structure.
   */
  int64_t getSizeBytes() const {
    int64_t accum = 0;
    accum += int64_t(sizeof(ExtensionModelMaxarMeshVariantsValue));
    accum += CesiumGltf::NamedObject::getSizeBytes() -
             int64_t(sizeof(CesiumGltf::NamedObject));
    accum += int64_t(this->name.capacity() * sizeof(char));
    return accum;
  }
};
} // namespace CesiumGltf
