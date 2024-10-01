#pragma once

#include "Library.h"

#include <glm/glm.hpp>

namespace CesiumGeometry {

/**
 * @brief Represents a distance range: [near, far]
 */
struct NearFarDistance {
  double near;
  double far;

  NearFarDistance() : near(0.0), far(0.0) {}

  NearFarDistance(double inNear, double inFar) : near(inNear), far(inFar) {}

  /**
   * @brief Compute the union of this NearFarDistance with another.
   * @param other The other NearFarDistance to union with this one.
   * @return The union NearFarDistance, which fully contains both.
   */
  NearFarDistance computeUnion(const NearFarDistance& other) const noexcept {
    return NearFarDistance{
        glm::min(this->near, other.near),
        glm::max(this->far, other.far)};
  }
};

} // namespace CesiumGeometry