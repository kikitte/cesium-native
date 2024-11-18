// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/Library.h"
#include "CesiumGltf/TextureInfo.h"

namespace CesiumGltf {
/**
 * @brief Material Normal Texture Info
 */
struct CESIUMGLTF_API MaterialNormalTextureInfo final : public TextureInfo {
  static inline constexpr const char* TypeName = "MaterialNormalTextureInfo";

  /**
   * @brief The scalar parameter applied to each normal vector of the normal
   * texture.
   *
   * The scalar parameter applied to each normal vector of the texture. This
   * value scales the normal vector in X and Y directions using the formula:
   * `scaledNormal =  normalize((<sampled normal texture value> * 2.0 - 1.0) *
   * vec3(<normal scale>, <normal scale>, 1.0))`.
   */
  double scale = 1;

  /**
   * @brief Calculates the size in bytes of this object, including the contents
   * of all collections, pointers, and strings. This will NOT include the size
   * of any extensions attached to the object. Calling this method may be slow
   * as it requires traversing the object's entire structure.
   */
  int64_t getSizeBytes() const {
    int64_t accum = 0;
    accum += int64_t(sizeof(MaterialNormalTextureInfo));
    accum += TextureInfo::getSizeBytes() - int64_t(sizeof(TextureInfo));

    return accum;
  }
};
} // namespace CesiumGltf
