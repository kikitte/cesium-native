// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "Cesium3DTiles/Library.h"

#include <CesiumUtility/ExtensibleObject.h>

#include <string>

namespace Cesium3DTiles {
/**
 * @brief 3D Tiles extension for S2 bounding volumes.
 */
struct CESIUM3DTILES_API Extension3dTilesBoundingVolumeS2 final
    : public CesiumUtility::ExtensibleObject {
  static inline constexpr const char* TypeName =
      "Extension3dTilesBoundingVolumeS2";
  static inline constexpr const char* ExtensionName =
      "3DTILES_bounding_volume_S2";

  /**
   * @brief A hexadecimal representation of the S2CellId. Tokens must be
   * lower-case, must not contain whitespace and must have trailing zeros
   * stripped.
   */
  std::string token;

  /**
   * @brief The minimum height of the tile, specified in meters above (or below)
   * the WGS84 ellipsoid.
   */
  double minimumHeight = double();

  /**
   * @brief The maximum height of the tile, specified in meters above (or below)
   * the WGS84 ellipsoid.
   */
  double maximumHeight = double();
};
} // namespace Cesium3DTiles
