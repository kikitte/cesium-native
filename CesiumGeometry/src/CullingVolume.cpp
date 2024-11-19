#include "CesiumGeometry/CullingVolume.h"

#include <glm/glm.hpp>
#include <glm/trigonometric.hpp>
#include <glm/vec3.hpp>

namespace Cesium3DTilesSelection {

CullingVolume createCullingVolume(
    const glm::dvec3& position,
    const glm::dvec3& direction,
    const glm::dvec3& up,
    const double fovx,
    const double fovy,
    const double near,
    const double far) noexcept {
  const double t = glm::tan(0.5 * fovy);
  const double b = -t;
  const double r = glm::tan(0.5 * fovx);
  const double l = -r;

  const double n = near;

  // TODO: this is all ported directly from CesiumJS, can probably be refactored
  // to be more efficient with GLM.

  const glm::dvec3 right = glm::cross(direction, up);

  glm::dvec3 nearCenter = direction * n;
  nearCenter = position + nearCenter;

  // Left plane computation
  glm::dvec3 normal = right * l;
  normal = nearCenter + normal;
  normal = normal - position;
  normal = glm::normalize(normal);
  normal = glm::cross(normal, up);
  normal = glm::normalize(normal);

  const CesiumGeometry::Plane leftPlane(normal, -glm::dot(normal, position));

  // Right plane computation
  normal = right * r;
  normal = nearCenter + normal;
  normal = normal - position;
  normal = glm::cross(up, normal);
  normal = glm::normalize(normal);

  const CesiumGeometry::Plane rightPlane(normal, -glm::dot(normal, position));

  // Bottom plane computation
  normal = up * b;
  normal = nearCenter + normal;
  normal = normal - position;
  normal = glm::cross(right, normal);
  normal = glm::normalize(normal);

  const CesiumGeometry::Plane bottomPlane(normal, -glm::dot(normal, position));

  // Top plane computation
  normal = up * t;
  normal = nearCenter + normal;
  normal = normal - position;
  normal = glm::cross(normal, right);
  normal = glm::normalize(normal);

  const CesiumGeometry::Plane topPlane(normal, -glm::dot(normal, position));

  // Near plane computation
  normal = direction;

  const CesiumGeometry::Plane nearPlane(normal, -glm::dot(normal, nearCenter));

  // Far plane computation
  normal = direction * -1.0;
  glm::dvec3 farCenter = direction * far;

  const CesiumGeometry::Plane farPlane(normal, -glm::dot(normal, farCenter));

  return {leftPlane, rightPlane, topPlane, bottomPlane, nearPlane, farPlane};
}
} // namespace Cesium3DTilesSelection
