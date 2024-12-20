#pragma once

#include "Plane.h"

namespace Cesium3DTilesSelection {

/**
 * @brief A culling volume, defined by four planes.
 *
 * The planes describe the culling volume that may be created for
 * the view frustum of a camera. The normals of these planes will
 * point inwards.
 */
struct CullingVolume final {

  /**
   * @brief The left plane of the culling volume.
   *
   * Defaults to (0,0,1), with a distance of 0.
   */
  CesiumGeometry::Plane leftPlane{glm::dvec3(0.0, 0.0, 1.0), 0.0};

  /**
   * @brief The right plane of the culling volume.
   *
   * Defaults to (0,0,1), with a distance of 0.
   */
  CesiumGeometry::Plane rightPlane{glm::dvec3(0.0, 0.0, 1.0), 0.0};

  /**
   * @brief The top plane of the culling volume.
   *
   * Defaults to (0,0,1), with a distance of 0.
   */
  CesiumGeometry::Plane topPlane{glm::dvec3(0.0, 0.0, 1.0), 0.0};

  /**
   * @brief The bottom plane of the culling volume.
   *
   * Defaults to (0,0,1), with a distance of 0.
   */
  CesiumGeometry::Plane bottomPlane{glm::dvec3(0.0, 0.0, 1.0), 0.0};

  /**
   * @brief The near plane of the culling volume.
   *
   * Defaults to (0,0,1), with a distance of 0.
   */
  CesiumGeometry::Plane nearPlane{glm::dvec3(0.0, 0.0, 1.0), 0.0};

  /**
   * @brief The far plane of the culling volume.
   *
   * Defaults to (0,0,1), with a distance of 0.
   */
  CesiumGeometry::Plane farPlane{glm::dvec3(0.0, 0.0, 1.0), 0.0};
};

/**
 * @brief Creates a {@link CullingVolume} for a perspective frustum.
 *
 * @param position The eye position
 * @param direction The viewing direction
 * @param up The up-vector of the frustum
 * @param fovx The horizontal Field-Of-View angle, in radians
 * @param fovy The vertical Field-Of-View angle, in radians
 * @param near The distance to the near plane.
 * @param far the distance to the far plane.
 * @return The {@link CullingVolume}
 */
CullingVolume createCullingVolume(
    const glm::dvec3& position,
    const glm::dvec3& direction,
    const glm::dvec3& up,
    double fovx,
    double fovy,
    double near,
    double far) noexcept;

/**
 * @brief Creates a {@link CullingVolume} for a perspective frustum.
 *
 * @param position The eye position
 * @param direction The viewing direction
 * @param up The up-vector of the frustum
 * @param fovx The horizontal Field-Of-View angle, in radians
 * @param fovy The vertical Field-Of-View angle, in radians
 * @return The {@link CullingVolume}
 */
inline CullingVolume createCullingVolume(
    const glm::dvec3& position,
    const glm::dvec3& direction,
    const glm::dvec3& up,
    double fovx,
    double fovy) noexcept {
  return createCullingVolume(position, direction, up, fovx, fovy, 1.0, 1.0);
};
} // namespace Cesium3DTilesSelection
