// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

// forward declarations
namespace CesiumJsonWriter {
class JsonWriter;
class ExtensionWriterContext;
} // namespace CesiumJsonWriter

// forward declarations
namespace CesiumGltf {
struct ExtensionMeshPrimitiveKhrDracoMeshCompression;
struct ExtensionMaterialKhrMaterialsUnlit;
struct ExtensionNodeExtMeshGpuInstancing;
struct ExtensionBufferExtMeshoptCompression;
struct ExtensionBufferViewExtMeshoptCompression;
struct ExtensionModelExtFeatureMetadata;
struct ExtensionMeshPrimitiveExtFeatureMetadata;
struct ExtensionMeshPrimitiveCesiumTileEdges;
struct ExtensionModelExtMeshFeatures;
struct ExtensionMeshPrimitiveExtMeshFeatures;
struct ExtensionNodeExtMeshFeatures;
struct ExtensionExtMeshFeaturesFeatureId;
struct ExtensionExtMeshFeaturesPropertyTexture;
struct ExtensionExtMeshFeaturesPropertyTable;
struct ExtensionExtMeshFeaturesPropertyTableProperty;
struct ExtensionExtMeshFeaturesSchema;
struct ExtensionExtMeshFeaturesEnum;
struct ExtensionExtMeshFeaturesEnumValue;
struct ExtensionExtMeshFeaturesClass;
struct ExtensionExtMeshFeaturesClassProperty;
struct ExtensionExtFeatureMetadataFeatureIdTexture;
struct ExtensionExtFeatureMetadataTextureAccessor;
struct TextureInfo;
struct ExtensionExtFeatureMetadataFeatureIdAttribute;
struct ExtensionExtFeatureMetadataFeatureIds;
struct ExtensionExtFeatureMetadataFeatureTexture;
struct ExtensionExtFeatureMetadataFeatureTable;
struct ExtensionExtFeatureMetadataFeatureTableProperty;
struct ExtensionExtFeatureMetadataStatistics;
struct ExtensionExtFeatureMetadataClassStatistics;
struct ExtensionExtFeatureMetadataClassPropertyStatistics;
struct ExtensionExtFeatureMetadataSchema;
struct ExtensionExtFeatureMetadataEnum;
struct ExtensionExtFeatureMetadataEnumValue;
struct ExtensionExtFeatureMetadataClass;
struct ExtensionExtFeatureMetadataClassProperty;
struct Model;
struct Texture;
struct Skin;
struct Scene;
struct Sampler;
struct Node;
struct Mesh;
struct MeshPrimitive;
struct Material;
struct MaterialOcclusionTextureInfo;
struct MaterialNormalTextureInfo;
struct MaterialPBRMetallicRoughness;
struct Image;
struct Camera;
struct CameraPerspective;
struct CameraOrthographic;
struct BufferView;
struct Buffer;
struct Asset;
struct Animation;
struct AnimationSampler;
struct AnimationChannel;
struct AnimationChannelTarget;
struct Accessor;
struct AccessorSparse;
struct AccessorSparseValues;
struct AccessorSparseIndices;
} // namespace CesiumGltf

namespace CesiumGltfWriter {

struct ExtensionMeshPrimitiveKhrDracoMeshCompressionJsonWriter {
  using ValueType = CesiumGltf::ExtensionMeshPrimitiveKhrDracoMeshCompression;

  static inline constexpr const char* ExtensionName =
      "KHR_draco_mesh_compression";

  static void write(
      const CesiumGltf::ExtensionMeshPrimitiveKhrDracoMeshCompression& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionMaterialKhrMaterialsUnlitJsonWriter {
  using ValueType = CesiumGltf::ExtensionMaterialKhrMaterialsUnlit;

  static inline constexpr const char* ExtensionName = "KHR_materials_unlit";

  static void write(
      const CesiumGltf::ExtensionMaterialKhrMaterialsUnlit& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionNodeExtMeshGpuInstancingJsonWriter {
  using ValueType = CesiumGltf::ExtensionNodeExtMeshGpuInstancing;

  static inline constexpr const char* ExtensionName = "EXT_mesh_gpu_instancing";

  static void write(
      const CesiumGltf::ExtensionNodeExtMeshGpuInstancing& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionBufferExtMeshoptCompressionJsonWriter {
  using ValueType = CesiumGltf::ExtensionBufferExtMeshoptCompression;

  static inline constexpr const char* ExtensionName = "EXT_meshopt_compression";

  static void write(
      const CesiumGltf::ExtensionBufferExtMeshoptCompression& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionBufferViewExtMeshoptCompressionJsonWriter {
  using ValueType = CesiumGltf::ExtensionBufferViewExtMeshoptCompression;

  static inline constexpr const char* ExtensionName = "EXT_meshopt_compression";

  static void write(
      const CesiumGltf::ExtensionBufferViewExtMeshoptCompression& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionModelExtFeatureMetadataJsonWriter {
  using ValueType = CesiumGltf::ExtensionModelExtFeatureMetadata;

  static inline constexpr const char* ExtensionName = "EXT_feature_metadata";

  static void write(
      const CesiumGltf::ExtensionModelExtFeatureMetadata& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionMeshPrimitiveExtFeatureMetadataJsonWriter {
  using ValueType = CesiumGltf::ExtensionMeshPrimitiveExtFeatureMetadata;

  static inline constexpr const char* ExtensionName = "EXT_feature_metadata";

  static void write(
      const CesiumGltf::ExtensionMeshPrimitiveExtFeatureMetadata& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionMeshPrimitiveCesiumTileEdgesJsonWriter {
  using ValueType = CesiumGltf::ExtensionMeshPrimitiveCesiumTileEdges;

  static inline constexpr const char* ExtensionName = "CESIUM_tile_edges";

  static void write(
      const CesiumGltf::ExtensionMeshPrimitiveCesiumTileEdges& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionModelExtMeshFeaturesJsonWriter {
  using ValueType = CesiumGltf::ExtensionModelExtMeshFeatures;

  static inline constexpr const char* ExtensionName = "EXT_mesh_features";

  static void write(
      const CesiumGltf::ExtensionModelExtMeshFeatures& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionMeshPrimitiveExtMeshFeaturesJsonWriter {
  using ValueType = CesiumGltf::ExtensionMeshPrimitiveExtMeshFeatures;

  static inline constexpr const char* ExtensionName = "EXT_mesh_features";

  static void write(
      const CesiumGltf::ExtensionMeshPrimitiveExtMeshFeatures& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionNodeExtMeshFeaturesJsonWriter {
  using ValueType = CesiumGltf::ExtensionNodeExtMeshFeatures;

  static inline constexpr const char* ExtensionName = "EXT_mesh_features";

  static void write(
      const CesiumGltf::ExtensionNodeExtMeshFeatures& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesFeatureIdJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesFeatureId;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesFeatureId& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesPropertyTextureJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesPropertyTexture;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesPropertyTexture& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesPropertyTableJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesPropertyTable;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesPropertyTable& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesPropertyTablePropertyJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesPropertyTableProperty;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesPropertyTableProperty& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesSchemaJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesSchema;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesSchema& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesEnumJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesEnum;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesEnum& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesEnumValueJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesEnumValue;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesEnumValue& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesClassJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesClass;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesClass& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesClassPropertyJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesClassProperty;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesClassProperty& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtFeatureMetadataFeatureIdTextureJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtFeatureMetadataFeatureIdTexture;

  static void write(
      const CesiumGltf::ExtensionExtFeatureMetadataFeatureIdTexture& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtFeatureMetadataTextureAccessorJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtFeatureMetadataTextureAccessor;

  static void write(
      const CesiumGltf::ExtensionExtFeatureMetadataTextureAccessor& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct TextureInfoJsonWriter {
  using ValueType = CesiumGltf::TextureInfo;

  static void write(
      const CesiumGltf::TextureInfo& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtFeatureMetadataFeatureIdAttributeJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtFeatureMetadataFeatureIdAttribute;

  static void write(
      const CesiumGltf::ExtensionExtFeatureMetadataFeatureIdAttribute& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtFeatureMetadataFeatureIdsJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtFeatureMetadataFeatureIds;

  static void write(
      const CesiumGltf::ExtensionExtFeatureMetadataFeatureIds& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtFeatureMetadataFeatureTextureJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtFeatureMetadataFeatureTexture;

  static void write(
      const CesiumGltf::ExtensionExtFeatureMetadataFeatureTexture& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtFeatureMetadataFeatureTableJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtFeatureMetadataFeatureTable;

  static void write(
      const CesiumGltf::ExtensionExtFeatureMetadataFeatureTable& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtFeatureMetadataFeatureTablePropertyJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtFeatureMetadataFeatureTableProperty;

  static void write(
      const CesiumGltf::ExtensionExtFeatureMetadataFeatureTableProperty& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtFeatureMetadataStatisticsJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtFeatureMetadataStatistics;

  static void write(
      const CesiumGltf::ExtensionExtFeatureMetadataStatistics& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtFeatureMetadataClassStatisticsJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtFeatureMetadataClassStatistics;

  static void write(
      const CesiumGltf::ExtensionExtFeatureMetadataClassStatistics& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtFeatureMetadataClassPropertyStatisticsJsonWriter {
  using ValueType =
      CesiumGltf::ExtensionExtFeatureMetadataClassPropertyStatistics;

  static void write(
      const CesiumGltf::ExtensionExtFeatureMetadataClassPropertyStatistics& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtFeatureMetadataSchemaJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtFeatureMetadataSchema;

  static void write(
      const CesiumGltf::ExtensionExtFeatureMetadataSchema& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtFeatureMetadataEnumJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtFeatureMetadataEnum;

  static void write(
      const CesiumGltf::ExtensionExtFeatureMetadataEnum& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtFeatureMetadataEnumValueJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtFeatureMetadataEnumValue;

  static void write(
      const CesiumGltf::ExtensionExtFeatureMetadataEnumValue& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtFeatureMetadataClassJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtFeatureMetadataClass;

  static void write(
      const CesiumGltf::ExtensionExtFeatureMetadataClass& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtFeatureMetadataClassPropertyJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtFeatureMetadataClassProperty;

  static void write(
      const CesiumGltf::ExtensionExtFeatureMetadataClassProperty& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ModelJsonWriter {
  using ValueType = CesiumGltf::Model;

  static void write(
      const CesiumGltf::Model& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct TextureJsonWriter {
  using ValueType = CesiumGltf::Texture;

  static void write(
      const CesiumGltf::Texture& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct SkinJsonWriter {
  using ValueType = CesiumGltf::Skin;

  static void write(
      const CesiumGltf::Skin& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct SceneJsonWriter {
  using ValueType = CesiumGltf::Scene;

  static void write(
      const CesiumGltf::Scene& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct SamplerJsonWriter {
  using ValueType = CesiumGltf::Sampler;

  static void write(
      const CesiumGltf::Sampler& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct NodeJsonWriter {
  using ValueType = CesiumGltf::Node;

  static void write(
      const CesiumGltf::Node& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct MeshJsonWriter {
  using ValueType = CesiumGltf::Mesh;

  static void write(
      const CesiumGltf::Mesh& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct MeshPrimitiveJsonWriter {
  using ValueType = CesiumGltf::MeshPrimitive;

  static void write(
      const CesiumGltf::MeshPrimitive& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct MaterialJsonWriter {
  using ValueType = CesiumGltf::Material;

  static void write(
      const CesiumGltf::Material& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct MaterialOcclusionTextureInfoJsonWriter {
  using ValueType = CesiumGltf::MaterialOcclusionTextureInfo;

  static void write(
      const CesiumGltf::MaterialOcclusionTextureInfo& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct MaterialNormalTextureInfoJsonWriter {
  using ValueType = CesiumGltf::MaterialNormalTextureInfo;

  static void write(
      const CesiumGltf::MaterialNormalTextureInfo& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct MaterialPBRMetallicRoughnessJsonWriter {
  using ValueType = CesiumGltf::MaterialPBRMetallicRoughness;

  static void write(
      const CesiumGltf::MaterialPBRMetallicRoughness& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ImageJsonWriter {
  using ValueType = CesiumGltf::Image;

  static void write(
      const CesiumGltf::Image& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct CameraJsonWriter {
  using ValueType = CesiumGltf::Camera;

  static void write(
      const CesiumGltf::Camera& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct CameraPerspectiveJsonWriter {
  using ValueType = CesiumGltf::CameraPerspective;

  static void write(
      const CesiumGltf::CameraPerspective& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct CameraOrthographicJsonWriter {
  using ValueType = CesiumGltf::CameraOrthographic;

  static void write(
      const CesiumGltf::CameraOrthographic& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct BufferViewJsonWriter {
  using ValueType = CesiumGltf::BufferView;

  static void write(
      const CesiumGltf::BufferView& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct BufferJsonWriter {
  using ValueType = CesiumGltf::Buffer;

  static void write(
      const CesiumGltf::Buffer& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AssetJsonWriter {
  using ValueType = CesiumGltf::Asset;

  static void write(
      const CesiumGltf::Asset& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AnimationJsonWriter {
  using ValueType = CesiumGltf::Animation;

  static void write(
      const CesiumGltf::Animation& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AnimationSamplerJsonWriter {
  using ValueType = CesiumGltf::AnimationSampler;

  static void write(
      const CesiumGltf::AnimationSampler& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AnimationChannelJsonWriter {
  using ValueType = CesiumGltf::AnimationChannel;

  static void write(
      const CesiumGltf::AnimationChannel& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AnimationChannelTargetJsonWriter {
  using ValueType = CesiumGltf::AnimationChannelTarget;

  static void write(
      const CesiumGltf::AnimationChannelTarget& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AccessorJsonWriter {
  using ValueType = CesiumGltf::Accessor;

  static void write(
      const CesiumGltf::Accessor& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AccessorSparseJsonWriter {
  using ValueType = CesiumGltf::AccessorSparse;

  static void write(
      const CesiumGltf::AccessorSparse& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AccessorSparseValuesJsonWriter {
  using ValueType = CesiumGltf::AccessorSparseValues;

  static void write(
      const CesiumGltf::AccessorSparseValues& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AccessorSparseIndicesJsonWriter {
  using ValueType = CesiumGltf::AccessorSparseIndices;

  static void write(
      const CesiumGltf::AccessorSparseIndices& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

} // namespace CesiumGltfWriter
