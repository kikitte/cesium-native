#pragma once

#include "GlobeRectangle.h"
#include "Library.h"

#include <glm/vec2.hpp>

#include <optional>
#include <string>
#include <vector>

namespace CesiumGeospatial {

/**
 * @brief A 2D polygon expressed as a list of longitude/latitude coordinates in
 * radians.
 *
 * The {@link Ellipsoid} associated with the coordinates is not specified
 * directly by this instance, but it is assumed that the longitude values range
 * from -PI to PI radians and the latitude values range from -PI/2 to PI/2
 * radians. Longitude values outside this range are wrapped to be inside the
 * range. Latitude values are clamped to the range.
 */
class CESIUMGEOSPATIAL_API CartographicPolygon final {
public:
  /**
   * @brief Constructs a 2D polygon that can be rasterized onto {@link Tileset}
   * objects.
   *
   * @param polygon An array of longitude-latitude points in radians defining
   * the perimeter of the 2D polygon.
   */
  CartographicPolygon(const std::vector<glm::dvec2>& polygon);

  /**
   * @brief Returns the longitude-latitude vertices that define the
   * perimeter of the selected polygon.
   *
   * @return The perimeter vertices in longitude-latitude radians.
   */
  constexpr const std::vector<glm::dvec2>& getVertices() const {
    return this->_vertices;
  }

  /**
   * @brief Returns the triangulated indices representing a triangle
   * decomposition of the polygon. The indices are in reference to the
   * polygon's perimeter vertices.
   *
   * @return The indices for the polygon's triangle decomposition.
   */
  constexpr const std::vector<uint32_t>& getIndices() const {
    return this->_indices;
  }

  /**
   * @brief Returns a {@link GlobeRectangle} that represents the bounding
   * rectangle of the polygon.
   *
   * @return The polygon's global bounding rectangle.
   */
  constexpr const std::optional<CesiumGeospatial::GlobeRectangle>&
  getBoundingRectangle() const {
    return this->_boundingRectangle;
  }

private:
  std::vector<glm::dvec2> _vertices;
  std::vector<uint32_t> _indices;
  std::optional<CesiumGeospatial::GlobeRectangle> _boundingRectangle;
};

} // namespace CesiumGeospatial
