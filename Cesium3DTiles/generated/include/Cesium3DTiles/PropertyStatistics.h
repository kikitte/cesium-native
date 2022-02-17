// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "Cesium3DTiles/Library.h"

#include <CesiumUtility/ExtensibleObject.h>
#include <CesiumUtility/JsonValue.h>

#include <unordered_map>

namespace Cesium3DTiles {
/**
 * @brief Statistics about property values.
 */
struct CESIUM3DTILES_API PropertyStatistics final
    : public CesiumUtility::ExtensibleObject {
  static inline constexpr const char* TypeName = "PropertyStatistics";

  /**
   * @brief The minimum property value occurring in the tileset. Only applicable
   * to `SCALAR`, `VECN`, and `MATN` types. The `normalized`, `offset`, and
   * `scale` properties have no effect on the minimum, it always corresponds to
   * the actual value.
   */
  CesiumUtility::JsonValue min;

  /**
   * @brief The maximum property value occurring in the tileset. Only applicable
   * to `SCALAR`, `VECN`, and `MATN` types. The `normalized`, `offset`, and
   * `scale` properties have no effect on the maximum, it always corresponds to
   * the actual value.
   */
  CesiumUtility::JsonValue max;

  /**
   * @brief The arithmetic mean of property values occurring in the tileset.
   * Only applicable to `SCALAR`, `VECN`, and `MATN` types. The `normalized`,
   * `offset`, and `scale` properties have no effect on the mean, it always
   * corresponds to the actual value.
   */
  CesiumUtility::JsonValue mean;

  /**
   * @brief The median of property values occurring in the tileset. Only
   * applicable to `SCALAR`, `VECN`, and `MATN` types. The `normalized`,
   * `offset`, and `scale` properties have no effect on the median, it always
   * corresponds to the actual value.
   */
  CesiumUtility::JsonValue median;

  /**
   * @brief The standard deviation of property values occurring in the tileset.
   * Only applicable to `SCALAR`, `VECN`, and `MATN` types. The `normalized`,
   * `offset`, and `scale` properties have no effect on the standard deviation,
   * it always corresponds to the actual value.
   */
  CesiumUtility::JsonValue standardDeviation;

  /**
   * @brief The variance of property values occurring in the tileset. Only
   * applicable to `SCALAR`, `VECN`, and `MATN` types. The `normalized`,
   * `offset`, and `scale` properties have no effect on the variance, it always
   * corresponds to the actual value.
   */
  CesiumUtility::JsonValue variance;

  /**
   * @brief The sum of property values occurring in the tileset. Only applicable
   * to `SCALAR`, `VECN`, and `MATN` types. The `normalized`, `offset`, and
   * `scale` properties have no effect on the sum, it always corresponds to the
   * actual value.
   */
  CesiumUtility::JsonValue sum;

  /**
   * @brief A dictionary, where each key corresponds to an enum `name` and each
   * value is the number of occurrences of that enum. Only applicable when
   * `type` is `ENUM`. For fixed-length arrays, this is an array of
   * component-wise occurrences.
   */
  std::unordered_map<std::string, CesiumUtility::JsonValue> occurrences;
};
} // namespace Cesium3DTiles
