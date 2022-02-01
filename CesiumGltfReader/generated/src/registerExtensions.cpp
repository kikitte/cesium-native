// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!

#include "registerExtensions.h"

#include "ExtensionBufferExtMeshoptCompressionJsonHandler.h"
#include "ExtensionBufferViewExtMeshoptCompressionJsonHandler.h"
#include "ExtensionCesiumTileEdgesJsonHandler.h"
#include "ExtensionExtMeshGpuInstancingJsonHandler.h"
#include "ExtensionKhrDracoMeshCompressionJsonHandler.h"
#include "ExtensionKhrMaterialsUnlitJsonHandler.h"
#include "ExtensionMeshPrimitiveExtFeatureMetadataJsonHandler.h"
#include "ExtensionMeshPrimitiveExtMeshFeaturesJsonHandler.h"
#include "ExtensionModelExtFeatureMetadataJsonHandler.h"
#include "ExtensionModelExtMeshFeaturesJsonHandler.h"
#include "ExtensionNodeExtMeshFeaturesJsonHandler.h"
#include "KHR_texture_basisuGlTFExtensionJsonHandler.h"

#include <CesiumGltf/Buffer.h>
#include <CesiumGltf/BufferView.h>
#include <CesiumGltf/Material.h>
#include <CesiumGltf/MeshPrimitive.h>
#include <CesiumGltf/Model.h>
#include <CesiumGltf/Node.h>
#include <CesiumGltf/Texture.h>
#include <CesiumJsonReader/ExtensionReaderContext.h>

namespace CesiumGltfReader {

void registerExtensions(CesiumJsonReader::ExtensionReaderContext& context) {
  (void)context;
  context.registerExtension<
      CesiumGltf::Texture,
      KHR_texture_basisuGlTFExtensionJsonHandler>();
  context.registerExtension<
      CesiumGltf::MeshPrimitive,
      ExtensionKhrDracoMeshCompressionJsonHandler>();
  context.registerExtension<
      CesiumGltf::MeshPrimitive,
      ExtensionMeshPrimitiveExtFeatureMetadataJsonHandler>();
  context.registerExtension<
      CesiumGltf::MeshPrimitive,
      ExtensionCesiumTileEdgesJsonHandler>();
  context.registerExtension<
      CesiumGltf::MeshPrimitive,
      ExtensionMeshPrimitiveExtMeshFeaturesJsonHandler>();
  context.registerExtension<
      CesiumGltf::Material,
      ExtensionKhrMaterialsUnlitJsonHandler>();
  context.registerExtension<
      CesiumGltf::Node,
      ExtensionExtMeshGpuInstancingJsonHandler>();
  context.registerExtension<
      CesiumGltf::Node,
      ExtensionNodeExtMeshFeaturesJsonHandler>();
  context.registerExtension<
      CesiumGltf::Buffer,
      ExtensionBufferExtMeshoptCompressionJsonHandler>();
  context.registerExtension<
      CesiumGltf::BufferView,
      ExtensionBufferViewExtMeshoptCompressionJsonHandler>();
  context.registerExtension<
      CesiumGltf::Model,
      ExtensionModelExtFeatureMetadataJsonHandler>();
  context.registerExtension<
      CesiumGltf::Model,
      ExtensionModelExtMeshFeaturesJsonHandler>();
}
} // namespace CesiumGltfReader
