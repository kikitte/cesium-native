// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!

#include "registerWriterExtensions.h"

#include "TilesetJsonWriter.h"

#include <Cesium3DTiles/BoundingVolume.h>
#include <CesiumJsonWriter/ExtensionWriterContext.h>

// NOLINTBEGIN(misc-include-cleaner)
#include <Cesium3DTiles/Extension3dTilesBoundingVolumeS2.h>
// NOLINTEND(misc-include-cleaner)

namespace Cesium3DTilesWriter {

void registerWriterExtensions(
    CesiumJsonWriter::ExtensionWriterContext& context) {
  (void)context;
  context.registerExtension<
      Cesium3DTiles::BoundingVolume,
      Extension3dTilesBoundingVolumeS2JsonWriter>();
}
} // namespace Cesium3DTilesWriter
