#pragma once

#include "Library.h"

namespace CesiumGeometry {

/**
 * @brief Represents a distance range: [near, far]
 */
struct NearFarDistance {
  double near;
  double far;

  NearFarDistance() : near(0.0), far(0.0) {}

  NearFarDistance(double inNear, double inFar) : near(inNear), far(inFar) {}
};

} // namespace CesiumGeometry