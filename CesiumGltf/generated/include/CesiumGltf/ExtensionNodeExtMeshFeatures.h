// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/ExtensionExtMeshFeaturesFeatureId.h"
#include "CesiumGltf/Library.h"

#include <CesiumUtility/ExtensibleObject.h>

#include <cstdint>
#include <vector>

namespace CesiumGltf {
/**
 * @brief An object describing per-instance feature IDs to be used as indices to
 * property arrays in the property table.
 */
struct CESIUMGLTF_API ExtensionNodeExtMeshFeatures final
    : public CesiumUtility::ExtensibleObject {
  static inline constexpr const char* TypeName = "ExtensionNodeExtMeshFeatures";
  static inline constexpr const char* ExtensionName = "EXT_mesh_features";

  /**
   * @brief featureIds
   */
  std::vector<CesiumGltf::ExtensionExtMeshFeaturesFeatureId> featureIds;

  /**
   * @brief An array of IDs of property tables from the root `EXT_mesh_features`
   * object.
   */
  std::vector<int32_t> propertyTables;
};
} // namespace CesiumGltf
