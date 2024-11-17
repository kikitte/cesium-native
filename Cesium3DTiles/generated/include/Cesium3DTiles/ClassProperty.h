// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "Cesium3DTiles/Library.h"

#include <CesiumUtility/ExtensibleObject.h>
#include <CesiumUtility/JsonValue.h>

#include <cstdint>
#include <optional>
#include <string>

namespace Cesium3DTiles {
/**
 * @brief A single property of a metadata class.
 */
struct CESIUM3DTILES_API ClassProperty final
    : public CesiumUtility::ExtensibleObject {
  static inline constexpr const char* TypeName = "ClassProperty";

  /**
   * @brief Known values for The element type.
   */
  struct Type {
    inline static const std::string SCALAR = "SCALAR";

    inline static const std::string VEC2 = "VEC2";

    inline static const std::string VEC3 = "VEC3";

    inline static const std::string VEC4 = "VEC4";

    inline static const std::string MAT2 = "MAT2";

    inline static const std::string MAT3 = "MAT3";

    inline static const std::string MAT4 = "MAT4";

    inline static const std::string STRING = "STRING";

    inline static const std::string BOOLEAN = "BOOLEAN";

    inline static const std::string ENUM = "ENUM";
  };

  /**
   * @brief Known values for The datatype of the element's components. Required
   * for `SCALAR`, `VECN`, and `MATN` types, and disallowed for other types.
   */
  struct ComponentType {
    inline static const std::string INT8 = "INT8";

    inline static const std::string UINT8 = "UINT8";

    inline static const std::string INT16 = "INT16";

    inline static const std::string UINT16 = "UINT16";

    inline static const std::string INT32 = "INT32";

    inline static const std::string UINT32 = "UINT32";

    inline static const std::string INT64 = "INT64";

    inline static const std::string UINT64 = "UINT64";

    inline static const std::string FLOAT32 = "FLOAT32";

    inline static const std::string FLOAT64 = "FLOAT64";
  };

  /**
   * @brief The name of the property, e.g. for display purposes.
   */
  std::optional<std::string> name;

  /**
   * @brief The description of the property.
   */
  std::optional<std::string> description;

  /**
   * @brief The element type.
   *
   * Known values are defined in {@link Type}.
   *
   */
  std::string type = Type::SCALAR;

  /**
   * @brief The datatype of the element's components. Required for `SCALAR`,
   * `VECN`, and `MATN` types, and disallowed for other types.
   *
   * Known values are defined in {@link ComponentType}.
   *
   */
  std::optional<std::string> componentType;

  /**
   * @brief Enum ID as declared in the `enums` dictionary. Required when `type`
   * is `ENUM`. Disallowed when `type` is not `ENUM`
   */
  std::optional<std::string> enumType;

  /**
   * @brief Whether the property is an array. When `count` is defined the
   * property is a fixed-length array. Otherwise the property is a
   * variable-length array.
   */
  bool array = false;

  /**
   * @brief The number of array elements. May only be defined when `array` is
   * `true`.
   */
  std::optional<int64_t> count;

  /**
   * @brief Specifies whether integer values are normalized. Only applicable to
   * `SCALAR`, `VECN`, and `MATN` types with integer component types. For
   * unsigned integer component types, values are normalized between
   * `[0.0, 1.0]`. For signed integer component types, values are normalized
   * between `[-1.0, 1.0]`. For all other component types, this property shall
   * be false.
   */
  bool normalized = false;

  /**
   * @brief An offset to apply to property values. Only applicable to `SCALAR`,
   * `VECN`, and `MATN` types when the component type is `FLOAT32` or `FLOAT64`,
   * or when the property is `normalized`. Not applicable to variable-length
   * arrays.
   */
  std::optional<CesiumUtility::JsonValue> offset;

  /**
   * @brief A scale to apply to property values. Only applicable to `SCALAR`,
   * `VECN`, and `MATN` types when the component type is `FLOAT32` or `FLOAT64`,
   * or when the property is `normalized`. Not applicable to variable-length
   * arrays.
   */
  std::optional<CesiumUtility::JsonValue> scale;

  /**
   * @brief Maximum allowed value for the property. Only applicable to `SCALAR`,
   * `VECN`, and `MATN` types. This is the maximum of all property values, after
   * the transforms based on the `normalized`, `offset`, and `scale` properties
   * have been applied. Not applicable to variable-length arrays.
   */
  std::optional<CesiumUtility::JsonValue> max;

  /**
   * @brief Minimum allowed value for the property. Only applicable to `SCALAR`,
   * `VECN`, and `MATN` types. This is the minimum of all property values, after
   * the transforms based on the `normalized`, `offset`, and `scale` properties
   * have been applied. Not applicable to variable-length arrays.
   */
  std::optional<CesiumUtility::JsonValue> min;

  /**
   * @brief If required, the property shall be present in every entity
   * conforming to the class. If not required, individual entities may include
   * `noData` values, or the entire property may be omitted. As a result,
   * `noData` has no effect on a required property. Client implementations may
   * use required properties to make performance optimizations.
   */
  bool required = false;

  /**
   * @brief A `noData` value represents missing data — also known as a sentinel
   * value — wherever it appears. `BOOLEAN` properties may not specify `noData`
   * values. This is given as the plain property value, without the transforms
   * from the `normalized`, `offset`, and `scale` properties. Shall not be
   * defined if `required` is true.
   */
  std::optional<CesiumUtility::JsonValue> noData;

  /**
   * @brief A default value to use when encountering a `noData` value or an
   * omitted property. The value is given in its final form, taking the effect
   * of `normalized`, `offset`, and `scale` properties into account. Shall not
   * be defined if `required` is true.
   */
  std::optional<CesiumUtility::JsonValue> defaultProperty;

  /**
   * @brief An identifier that describes how this property should be
   * interpreted. The semantic cannot be used by other properties in the class.
   */
  std::optional<std::string> semantic;

  /**
   * @brief Calculates the size in bytes of this object, including the contents
   * of all collections, pointers, and strings. This will NOT include the size
   * of any extensions attached to the object. Calling this method may be slow
   * as it requires traversing the object's entire structure.
   */
  int64_t getSizeBytes() const {
    int64_t accum = 0;
    accum += int64_t(sizeof(ClassProperty));
    accum += CesiumUtility::ExtensibleObject::getSizeBytes() -
             int64_t(sizeof(CesiumUtility::ExtensibleObject));
    if (this->name) {
      accum += int64_t(this->name->capacity() * sizeof(char));
    }
    if (this->description) {
      accum += int64_t(this->description->capacity() * sizeof(char));
    }
    if (this->enumType) {
      accum += int64_t(this->enumType->capacity() * sizeof(char));
    }
    if (this->semantic) {
      accum += int64_t(this->semantic->capacity() * sizeof(char));
    }
    return accum;
  }
};
} // namespace Cesium3DTiles
