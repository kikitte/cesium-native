#pragma once

#include "Cartographic.h"
#include "Library.h"

#include <CesiumUtility/Math.h>

#include <glm/vec3.hpp>

#include <optional>

namespace CesiumGeospatial {

/**
 * @brief A quadratic surface defined in Cartesian coordinates.
 *
 * The surface is defined by the equation `(x / a)^2 + (y / b)^2 + (z / c)^2 =
 * 1`. This is primarily used by Cesium to represent the shape of planetary
 * bodies. Rather than constructing this object directly, one of the provided
 * constants is normally used.
 */
class CESIUMGEOSPATIAL_API Sphere final {
public:
  /**
   * A sphere approximate the Earth with (0, 0, 0) as center and an average
   * radius.
   */
  static const Sphere EarthSphere;

  /**
   * @brief Construct a new instance.
   *
   * @param center The center of the sphere.
   * @param radius The radius of the sphere.
   */
  constexpr Sphere(const glm::dvec3& center, double radius) noexcept
      : _center(center), _radius(radius) {}

  /**
   * @brief Gets the center of the sphere.
   */
  constexpr const glm::dvec3& getCenter() const noexcept {
    return this->_center;
  }

  /**
   * @brief Gets the radius of the sphere.
   */
  constexpr double getRadius() const noexcept { return this->_radius; }

  /**
   * @brief Converts the provided {@link Cartographic} to cartesian
   * representation.
   *
   * @param cartographic The {@link Cartographic} position.
   * @return The cartesian representation.
   */
  glm::dvec3
  cartographicToCartesian(const Cartographic& cartographic) const noexcept;

  /**
   * @brief Converts the provided cartesian to a {@link Cartographic}
   * representation.
   *
   * An cartographic with height=-radius, lng lat=arbitrary value returned, if
   * the given cartesian is at the center of this ellipsoid.
   *
   * @param cartesian The cartesian position.
   * @return The {@link Cartographic} representation
   */
  Cartographic
  cartesianToCartographic(const glm::dvec3& cartesian) const noexcept;

private:
  glm::dvec3 _center;
  double _radius;
};
} // namespace CesiumGeospatial
