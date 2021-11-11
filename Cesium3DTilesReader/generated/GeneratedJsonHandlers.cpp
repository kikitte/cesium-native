// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#include <Cesium3DTiles/Extension3dTilesContentGltf.h>
#include <Cesium3DTiles/Extension3dTilesContentGltfJsonHandler.h>

#include <cassert>
#include <string>

using namespace Cesium3DTiles;

Extension3dTilesContentGltfJsonHandler::Extension3dTilesContentGltfJsonHandler(
    const CesiumJsonReader::ExtensionReaderContext& context) noexcept
    : CesiumJsonReader::ExtensibleObjectJsonHandler(context),
      _extensionsUsed(),
      _extensionsRequired() {}

void Extension3dTilesContentGltfJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    Extension3dTilesContentGltf* pObject) {
  CesiumJsonReader::ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
}

CesiumJsonReader::IJsonHandler*
Extension3dTilesContentGltfJsonHandler::readObjectKey(
    const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeyExtension3dTilesContentGltf(
      Extension3dTilesContentGltf::TypeName,
      str,
      *this->_pObject);
}

void Extension3dTilesContentGltfJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    CesiumUtility::ExtensibleObject& o,
    const std::string_view& extensionName) {
  std::any& value =
      o.extensions.emplace(extensionName, Extension3dTilesContentGltf())
          .first->second;
  this->reset(
      pParentHandler,
      &std::any_cast<Extension3dTilesContentGltf&>(value));
}

CesiumJsonReader::IJsonHandler* Extension3dTilesContentGltfJsonHandler::
    readObjectKeyExtension3dTilesContentGltf(
        const std::string& objectType,
        const std::string_view& str,
        Extension3dTilesContentGltf& o) {
  using namespace std::string_literals;

  if ("extensionsUsed"s == str)
    return property("extensionsUsed", this->_extensionsUsed, o.extensionsUsed);
  if ("extensionsRequired"s == str)
    return property(
        "extensionsRequired",
        this->_extensionsRequired,
        o.extensionsRequired);

  return this->readObjectKeyExtensibleObject(objectType, str, *this->_pObject);
}
// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#include <Cesium3DTiles/Tileset.h>
#include <Cesium3DTiles/TilesetJsonHandler.h>

#include <cassert>
#include <string>

using namespace Cesium3DTiles;

TilesetJsonHandler::TilesetJsonHandler(
    const CesiumJsonReader::ExtensionReaderContext& context) noexcept
    : CesiumJsonReader::ExtensibleObjectJsonHandler(context),
      _asset(context),
      _properties(context),
      _geometricError(),
      _root(context),
      _extensionsUsed(),
      _extensionsRequired() {}

void TilesetJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    Tileset* pObject) {
  CesiumJsonReader::ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
}

CesiumJsonReader::IJsonHandler*
TilesetJsonHandler::readObjectKey(const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeyTileset(Tileset::TypeName, str, *this->_pObject);
}

CesiumJsonReader::IJsonHandler* TilesetJsonHandler::readObjectKeyTileset(
    const std::string& objectType,
    const std::string_view& str,
    Tileset& o) {
  using namespace std::string_literals;

  if ("asset"s == str)
    return property("asset", this->_asset, o.asset);
  if ("properties"s == str)
    return property("properties", this->_properties, o.properties);
  if ("geometricError"s == str)
    return property("geometricError", this->_geometricError, o.geometricError);
  if ("root"s == str)
    return property("root", this->_root, o.root);
  if ("extensionsUsed"s == str)
    return property("extensionsUsed", this->_extensionsUsed, o.extensionsUsed);
  if ("extensionsRequired"s == str)
    return property(
        "extensionsRequired",
        this->_extensionsRequired,
        o.extensionsRequired);

  return this->readObjectKeyExtensibleObject(objectType, str, *this->_pObject);
}
// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#include <Cesium3DTiles/Tile.h>
#include <Cesium3DTiles/TileJsonHandler.h>

#include <cassert>
#include <string>

using namespace Cesium3DTiles;

TileJsonHandler::TileJsonHandler(
    const CesiumJsonReader::ExtensionReaderContext& context) noexcept
    : CesiumJsonReader::ExtensibleObjectJsonHandler(context),
      _boundingVolume(context),
      _viewerRequestVolume(context),
      _geometricError(),
      _refine(),
      _transform(),
      _content(context),
      _children(context) {}

void TileJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    Tile* pObject) {
  CesiumJsonReader::ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
}

CesiumJsonReader::IJsonHandler*
TileJsonHandler::readObjectKey(const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeyTile(Tile::TypeName, str, *this->_pObject);
}

CesiumJsonReader::IJsonHandler* TileJsonHandler::readObjectKeyTile(
    const std::string& objectType,
    const std::string_view& str,
    Tile& o) {
  using namespace std::string_literals;

  if ("boundingVolume"s == str)
    return property("boundingVolume", this->_boundingVolume, o.boundingVolume);
  if ("viewerRequestVolume"s == str)
    return property(
        "viewerRequestVolume",
        this->_viewerRequestVolume,
        o.viewerRequestVolume);
  if ("geometricError"s == str)
    return property("geometricError", this->_geometricError, o.geometricError);
  if ("refine"s == str)
    return property("refine", this->_refine, o.refine);
  if ("transform"s == str)
    return property("transform", this->_transform, o.transform);
  if ("content"s == str)
    return property("content", this->_content, o.content);
  if ("children"s == str)
    return property("children", this->_children, o.children);

  return this->readObjectKeyExtensibleObject(objectType, str, *this->_pObject);
}
// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#include <Cesium3DTiles/Content.h>
#include <Cesium3DTiles/ContentJsonHandler.h>

#include <cassert>
#include <string>

using namespace Cesium3DTiles;

ContentJsonHandler::ContentJsonHandler(
    const CesiumJsonReader::ExtensionReaderContext& context) noexcept
    : CesiumJsonReader::ExtensibleObjectJsonHandler(context),
      _boundingVolume(context),
      _uri() {}

void ContentJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    Content* pObject) {
  CesiumJsonReader::ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
}

CesiumJsonReader::IJsonHandler*
ContentJsonHandler::readObjectKey(const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeyContent(Content::TypeName, str, *this->_pObject);
}

CesiumJsonReader::IJsonHandler* ContentJsonHandler::readObjectKeyContent(
    const std::string& objectType,
    const std::string_view& str,
    Content& o) {
  using namespace std::string_literals;

  if ("boundingVolume"s == str)
    return property("boundingVolume", this->_boundingVolume, o.boundingVolume);
  if ("uri"s == str)
    return property("uri", this->_uri, o.uri);

  return this->readObjectKeyExtensibleObject(objectType, str, *this->_pObject);
}
// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#include <Cesium3DTiles/BoundingVolume.h>
#include <Cesium3DTiles/BoundingVolumeJsonHandler.h>

#include <cassert>
#include <string>

using namespace Cesium3DTiles;

BoundingVolumeJsonHandler::BoundingVolumeJsonHandler(
    const CesiumJsonReader::ExtensionReaderContext& context) noexcept
    : CesiumJsonReader::ExtensibleObjectJsonHandler(context),
      _box(),
      _region(),
      _sphere() {}

void BoundingVolumeJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    BoundingVolume* pObject) {
  CesiumJsonReader::ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
}

CesiumJsonReader::IJsonHandler*
BoundingVolumeJsonHandler::readObjectKey(const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeyBoundingVolume(
      BoundingVolume::TypeName,
      str,
      *this->_pObject);
}

CesiumJsonReader::IJsonHandler*
BoundingVolumeJsonHandler::readObjectKeyBoundingVolume(
    const std::string& objectType,
    const std::string_view& str,
    BoundingVolume& o) {
  using namespace std::string_literals;

  if ("box"s == str)
    return property("box", this->_box, o.box);
  if ("region"s == str)
    return property("region", this->_region, o.region);
  if ("sphere"s == str)
    return property("sphere", this->_sphere, o.sphere);

  return this->readObjectKeyExtensibleObject(objectType, str, *this->_pObject);
}
// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#include <Cesium3DTiles/Properties.h>
#include <Cesium3DTiles/PropertiesJsonHandler.h>

#include <cassert>
#include <string>

using namespace Cesium3DTiles;

PropertiesJsonHandler::PropertiesJsonHandler(
    const CesiumJsonReader::ExtensionReaderContext& context) noexcept
    : CesiumJsonReader::ExtensibleObjectJsonHandler(context),
      _maximum(),
      _minimum() {}

void PropertiesJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    Properties* pObject) {
  CesiumJsonReader::ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
}

CesiumJsonReader::IJsonHandler*
PropertiesJsonHandler::readObjectKey(const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeyProperties(
      Properties::TypeName,
      str,
      *this->_pObject);
}

CesiumJsonReader::IJsonHandler* PropertiesJsonHandler::readObjectKeyProperties(
    const std::string& objectType,
    const std::string_view& str,
    Properties& o) {
  using namespace std::string_literals;

  if ("maximum"s == str)
    return property("maximum", this->_maximum, o.maximum);
  if ("minimum"s == str)
    return property("minimum", this->_minimum, o.minimum);

  return this->readObjectKeyExtensibleObject(objectType, str, *this->_pObject);
}
// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#include <Cesium3DTiles/Asset.h>
#include <Cesium3DTiles/AssetJsonHandler.h>

#include <cassert>
#include <string>

using namespace Cesium3DTiles;

AssetJsonHandler::AssetJsonHandler(
    const CesiumJsonReader::ExtensionReaderContext& context) noexcept
    : CesiumJsonReader::ExtensibleObjectJsonHandler(context),
      _version(),
      _tilesetVersion() {}

void AssetJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    Asset* pObject) {
  CesiumJsonReader::ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
}

CesiumJsonReader::IJsonHandler*
AssetJsonHandler::readObjectKey(const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeyAsset(Asset::TypeName, str, *this->_pObject);
}

CesiumJsonReader::IJsonHandler* AssetJsonHandler::readObjectKeyAsset(
    const std::string& objectType,
    const std::string_view& str,
    Asset& o) {
  using namespace std::string_literals;

  if ("version"s == str)
    return property("version", this->_version, o.version);
  if ("tilesetVersion"s == str)
    return property("tilesetVersion", this->_tilesetVersion, o.tilesetVersion);

  return this->readObjectKeyExtensibleObject(objectType, str, *this->_pObject);
}
