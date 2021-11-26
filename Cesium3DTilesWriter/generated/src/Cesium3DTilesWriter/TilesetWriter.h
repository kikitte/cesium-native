// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

// forward declarations
namespace CesiumJsonWriter {
class JsonWriter;
class ExtensionWriterContext;
} // namespace CesiumJsonWriter

// forward declarations
namespace Cesium3DTiles {
struct Extension3dTilesContentGltf;
struct Extension3dTilesBoundingVolumeS2;
struct Extension3dTilesImplicitTiling;
struct Subtrees;
struct Tileset;
struct Tile;
struct Content;
struct BoundingVolume;
struct Properties;
struct Asset;
} // namespace Cesium3DTiles

namespace Cesium3DTilesWriter {

struct Extension3dTilesContentGltfWriter {
  using ValueType = Cesium3DTiles::Extension3dTilesContentGltf;

  static inline constexpr const char* ExtensionName = "3DTILES_content_gltf";

  static void write(
      const Cesium3DTiles::Extension3dTilesContentGltf& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);

  static void
  populateExtensions(CesiumJsonWriter::ExtensionWriterContext& context);
};

struct Extension3dTilesBoundingVolumeS2Writer {
  using ValueType = Cesium3DTiles::Extension3dTilesBoundingVolumeS2;

  static inline constexpr const char* ExtensionName =
      "3DTILES_bounding_volume_S2";

  static void write(
      const Cesium3DTiles::Extension3dTilesBoundingVolumeS2& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);

  static void
  populateExtensions(CesiumJsonWriter::ExtensionWriterContext& context);
};

struct Extension3dTilesImplicitTilingWriter {
  using ValueType = Cesium3DTiles::Extension3dTilesImplicitTiling;

  static inline constexpr const char* ExtensionName = "3DTILES_implicit_tiling";

  static void write(
      const Cesium3DTiles::Extension3dTilesImplicitTiling& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);

  static void
  populateExtensions(CesiumJsonWriter::ExtensionWriterContext& context);
};

struct SubtreesWriter {
  using ValueType = Cesium3DTiles::Subtrees;

  static void write(
      const Cesium3DTiles::Subtrees& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);

  static void
  populateExtensions(CesiumJsonWriter::ExtensionWriterContext& context);
};

struct TilesetWriter {
  using ValueType = Cesium3DTiles::Tileset;

  static void write(
      const Cesium3DTiles::Tileset& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);

  static void
  populateExtensions(CesiumJsonWriter::ExtensionWriterContext& context);
};

struct TileWriter {
  using ValueType = Cesium3DTiles::Tile;

  static void write(
      const Cesium3DTiles::Tile& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);

  static void
  populateExtensions(CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ContentWriter {
  using ValueType = Cesium3DTiles::Content;

  static void write(
      const Cesium3DTiles::Content& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);

  static void
  populateExtensions(CesiumJsonWriter::ExtensionWriterContext& context);
};

struct BoundingVolumeWriter {
  using ValueType = Cesium3DTiles::BoundingVolume;

  static void write(
      const Cesium3DTiles::BoundingVolume& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);

  static void
  populateExtensions(CesiumJsonWriter::ExtensionWriterContext& context);
};

struct PropertiesWriter {
  using ValueType = Cesium3DTiles::Properties;

  static void write(
      const Cesium3DTiles::Properties& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);

  static void
  populateExtensions(CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AssetWriter {
  using ValueType = Cesium3DTiles::Asset;

  static void write(
      const Cesium3DTiles::Asset& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);

  static void
  populateExtensions(CesiumJsonWriter::ExtensionWriterContext& context);
};

} // namespace Cesium3DTilesWriter
