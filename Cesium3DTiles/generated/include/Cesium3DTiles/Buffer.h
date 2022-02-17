// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "Cesium3DTiles/Library.h"

#include <CesiumUtility/ExtensibleObject.h>

#include <cstdint>
#include <optional>
#include <string>

namespace Cesium3DTiles {
/**
 * @brief A buffer is a binary blob. It is either the binary chunk of the
 * subtree file, or an external buffer referenced by a URI.
 */
struct CESIUM3DTILES_API Buffer final : public CesiumUtility::ExtensibleObject {
  static inline constexpr const char* TypeName = "Buffer";

  /**
   * @brief The URI (or IRI) of the external schema file. Relative paths are
   * relative to the file containing the buffer JSON. `uri` is required when
   * using the JSON subtree format and not required when using the binary
   * subtree format - when omitted the buffer refers to the binary chunk of the
   * subtree file.
   */
  std::optional<std::string> uri;

  /**
   * @brief The length of the buffer in bytes.
   */
  int64_t byteLength = int64_t();

  /**
   * @brief The name of the buffer.
   */
  std::optional<std::string> name;
};
} // namespace Cesium3DTiles
