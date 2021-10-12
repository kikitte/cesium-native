// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "Library.h"
#include "PropertyStatistics.h"

#include <CesiumUtility/ExtensibleObject.h>

#include <cstdint>
#include <optional>
#include <unordered_map>

namespace CesiumGltf {
/**
 * @brief Statistics about features that conform to the class.
 */
struct CESIUMGLTF_API ClassStatistics final
    : public CesiumUtility::ExtensibleObject {
  static inline constexpr const char* TypeName = "ClassStatistics";

  /**
   * @brief The number of features that conform to the class.
   */
  std::optional<int64_t> count;

  /**
   * @brief A dictionary, where each key corresponds to a property ID in the
   * class' `properties` dictionary and each value is an object containing
   * statistics about property values.
   */
  std::unordered_map<std::string, PropertyStatistics> properties;
};
} // namespace CesiumGltf
