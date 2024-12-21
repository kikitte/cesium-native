#include "CesiumGeospatial/Sphere.h"

#include <CesiumUtility/Math.h>

#include <glm/geometric.hpp>
#include <glm/trigonometric.hpp>

using namespace CesiumUtility;

namespace CesiumGeospatial {

/*
 * Approximate radius of the earth in meters.
 * Uses the WGS-84 approximation. The radius at the equator is ~6378137 and at
 * the poles is ~6356752.
 * https://en.wikipedia.org/wiki/World_Geodetic_System#WGS84 6371008.8 is one
 * published "average radius" see
 * https://en.wikipedia.org/wiki/Earth_radius#Mean_radius, or
 * ftp://athena.fsv.cvut.cz/ZFG/grs80-Moritz.pdf p.4
 */
constexpr static double earthRadius = 6371008.8;

const Sphere Sphere::EarthSphere{glm::dvec3{0.0, 0.0, 0.0}, earthRadius};

glm::dvec3 Sphere::cartographicToCartesian(
    const Cartographic& cartographic) const noexcept {
  double radius = _radius + cartographic.height;
  double sinLat = glm::sin(cartographic.latitude);
  double sinLng = glm::sin(cartographic.longitude);
  double cosLng = glm::cos(cartographic.longitude);
  double z = sinLat * radius;
  double x = cosLng * radius;
  double y = sinLng * radius;

  return {x, y, z};
}
Cartographic
Sphere::cartesianToCartographic(const glm::dvec3& cartesian) const noexcept {
  double radius = glm::length(cartesian);
  double height = radius - _radius;
  double lat = glm::asin(cartesian.z / radius);
  double lng = glm::atan(cartesian.y, cartesian.x);
  return {lng, lat, height};
}
} // namespace CesiumGeospatial
