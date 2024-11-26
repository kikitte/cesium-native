// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumGltf/AccessorSparse.h>
#include <CesiumGltf/Library.h>
#include <CesiumGltf/NamedObject.h>

#include <cstdint>
#include <optional>
#include <string>
#include <vector>

namespace CesiumGltf {
/**
 * @brief A typed view into a buffer view that contains raw binary data.
 */
struct CESIUMGLTF_API AccessorSpec : public CesiumGltf::NamedObject {
  static constexpr const char* TypeName = "Accessor";

  /**
   * @brief Known values for The datatype of the accessor's components.
   */
  struct ComponentType {
    static constexpr int32_t BYTE = 5120;

    static constexpr int32_t UNSIGNED_BYTE = 5121;

    static constexpr int32_t SHORT = 5122;

    static constexpr int32_t UNSIGNED_SHORT = 5123;

    static constexpr int32_t INT = 5124;

    static constexpr int32_t UNSIGNED_INT = 5125;

    static constexpr int32_t INT64 = 5134;

    static constexpr int32_t UNSIGNED_INT64 = 5135;

    static constexpr int32_t FLOAT = 5126;

    static constexpr int32_t DOUBLE = 5130;
  };

  /**
   * @brief Known values for Specifies if the accessor's elements are scalars,
   * vectors, or matrices.
   */
  struct Type {
    inline static const std::string SCALAR = "SCALAR";

    inline static const std::string VEC2 = "VEC2";

    inline static const std::string VEC3 = "VEC3";

    inline static const std::string VEC4 = "VEC4";

    inline static const std::string MAT2 = "MAT2";

    inline static const std::string MAT3 = "MAT3";

    inline static const std::string MAT4 = "MAT4";
  };

  /**
   * @brief The index of the bufferView.
   *
   * The index of the buffer view. When undefined, the accessor **MUST** be
   * initialized with zeros; `sparse` property or extensions **MAY** override
   * zeros with actual values.
   */
  int32_t bufferView = -1;

  /**
   * @brief The offset relative to the start of the buffer view in bytes.
   *
   * This **MUST** be a multiple of the size of the component datatype. This
   * property **MUST NOT** be defined when `bufferView` is undefined.
   */
  int64_t byteOffset = 0;

  /**
   * @brief The datatype of the accessor's components.
   *
   * Known values are defined in {@link ComponentType}.
   *
   *
   * UNSIGNED_INT type **MUST NOT** be used for any accessor that is not
   * referenced by `mesh.primitive.indices`.
   */
  int32_t componentType = ComponentType::BYTE;

  /**
   * @brief Specifies whether integer data values are normalized before usage.
   *
   * Specifies whether integer data values are normalized (`true`) to [0, 1]
   * (for unsigned types) or to [-1, 1] (for signed types) when they are
   * accessed. This property **MUST NOT** be set to `true` for accessors with
   * `FLOAT` or `UNSIGNED_INT` component type.
   */
  bool normalized = false;

  /**
   * @brief The number of elements referenced by this accessor.
   *
   * The number of elements referenced by this accessor, not to be confused with
   * the number of bytes or number of components.
   */
  int64_t count = int64_t();

  /**
   * @brief Specifies if the accessor's elements are scalars, vectors, or
   * matrices.
   *
   * Known values are defined in {@link Type}.
   *
   */
  std::string type = Type::SCALAR;

  /**
   * @brief Maximum value of each component in this accessor.
   *
   * Array elements **MUST** be treated as having the same data type as
   * accessor's `componentType`. Both `min` and `max` arrays have the same
   * length.  The length is determined by the value of the `type` property; it
   * can be 1, 2, 3, 4, 9, or 16.
   *
   * `normalized` property has no effect on array values: they always correspond
   * to the actual values stored in the buffer. When the accessor is sparse,
   * this property **MUST** contain maximum values of accessor data with sparse
   * substitution applied.
   */
  std::vector<double> max;

  /**
   * @brief Minimum value of each component in this accessor.
   *
   * Array elements **MUST** be treated as having the same data type as
   * accessor's `componentType`. Both `min` and `max` arrays have the same
   * length.  The length is determined by the value of the `type` property; it
   * can be 1, 2, 3, 4, 9, or 16.
   *
   * `normalized` property has no effect on array values: they always correspond
   * to the actual values stored in the buffer. When the accessor is sparse,
   * this property **MUST** contain minimum values of accessor data with sparse
   * substitution applied.
   */
  std::vector<double> min;

  /**
   * @brief Sparse storage of elements that deviate from their initialization
   * value.
   */
  std::optional<CesiumGltf::AccessorSparse> sparse;

  /**
   * @brief Calculates the size in bytes of this object, including the contents
   * of all collections, pointers, and strings. This will NOT include the size
   * of any extensions attached to the object. Calling this method may be slow
   * as it requires traversing the object's entire structure.
   */
  int64_t getSizeBytes() const {
    int64_t accum = 0;
    accum += int64_t(sizeof(AccessorSpec));
    accum += CesiumGltf::NamedObject::getSizeBytes() -
             int64_t(sizeof(CesiumGltf::NamedObject));
    accum += int64_t(sizeof(double) * this->max.capacity());
    accum += int64_t(sizeof(double) * this->min.capacity());
    if (this->sparse) {
      accum += this->sparse->getSizeBytes() -
               int64_t(sizeof(CesiumGltf::AccessorSparse));
    }
    return accum;
  }

protected:
  /**
   * @brief This class is not meant to be instantiated directly. Use {@link Accessor} instead.
   */
  AccessorSpec() = default;
  friend struct Accessor;
};
} // namespace CesiumGltf
