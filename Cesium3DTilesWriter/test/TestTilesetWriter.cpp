#include "Cesium3DTilesWriter/TilesetWriter.h"

#include <Cesium3DTiles/Extension3dTilesContentGltf.h>
#include <Cesium3DTilesReader/TilesetReader.h>

#include <catch2/catch.hpp>

namespace {
std::string removeWhitespace(const std::string& s) {
  std::string compact = s;
  compact.erase(
      remove_if(compact.begin(), compact.end(), isspace),
      compact.end());
  return compact;
}
void check(const std::string& input, const std::string& expectedOutput) {
  Cesium3DTilesReader::TilesetReader reader;
  Cesium3DTilesReader::TilesetReaderResult readResult =
      reader.readTileset(gsl::span(
          reinterpret_cast<const std::byte*>(input.c_str()),
          input.size()));
  REQUIRE(readResult.errors.empty());
  REQUIRE(readResult.warnings.empty());
  REQUIRE(readResult.tileset.has_value());

  Cesium3DTiles::Tileset& tileset = readResult.tileset.value();

  Cesium3DTilesWriter::TilesetWriter writer;
  Cesium3DTilesWriter::TilesetWriterResult writeResult =
      writer.writeTileset(tileset);
  const auto asBytes = writeResult.tilesetBytes;

  REQUIRE(writeResult.errors.empty());
  REQUIRE(writeResult.warnings.empty());

  std::string expectedString = removeWhitespace(expectedOutput);

  const std::string extractedString(
      reinterpret_cast<const char*>(asBytes.data()),
      asBytes.size());

  REQUIRE(expectedString == extractedString);
}
} // namespace

TEST_CASE("Writes tileset JSON") {
  std::string string = R"(
    {
      "asset": {
        "version": "1.0",
        "tilesetVersion": "1.2.3"
      },
      "properties": {
        "property1": {
          "maximum": 10.0,
          "minimum": 0.0
        },
        "property2": {
          "maximum": 5.0,
          "minimum": 1.0
        }
      },
      "geometricError": 45.0,
      "root": {
        "boundingVolume": {
          "box":
          [20.0, 21.0, 22.0, 23.0, 24.0, 25.0, 26.0, 27.0, 28.0, 29.0, 30.0, 31.0]
        },
        "geometricError": 35.0,
        "refine": "REPLACE",
        "transform": [1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0,
        0.0, 0.0, 0.0, 0.0, 1.0], "children": [
          {
            "boundingVolume": {
              "box":
              [0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0]
            },
            "geometricError": 15.0,
            "refine": "ADD",
            "transform": [1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
            0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0], "content": {
              "uri": "1.gltf"
            }
          },
          {
            "boundingVolume": {
              "box":
              [10.0, 11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0,
              21.0]
            },
            "viewerRequestVolume": {
              "box":
              [30.0, 31.0, 32.0, 33.0, 34.0, 35.0, 36.0, 37.0, 38.0, 39.0, 40.0,
              41.0]
            },
            "geometricError": 25.0,
            "transform": [1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
            0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0], "content": {
              "boundingVolume": {
                "sphere": [30.0, 31.0, 32.0, 33.0]
              },
              "uri": "2.gltf"
            }
          }
        ]
      }
    }
  )";

  check(string, string);
}

TEST_CASE("Writes tileset JSON with extras") {
  std::string string = R"(
    {
      "asset": {
        "version": "1.0"
      },
      "geometricError": 45.0,
      "root": {
        "boundingVolume": {
          "box": [0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0]
        },
        "geometricError": 15.0,
        "refine": "ADD",
        "transform": [1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0],
        "extras": {
          "D": "Goodbye"
        }
      },
      "extras": {
        "A": "Hello",
        "B": 1234567,
        "C": {
          "C1": {},
          "C2": [1,2,3,4,5],
          "C3": true
        }
      }
    }
  )";

  check(string, string);
}

TEST_CASE("Writes tileset JSON with 3DTILES_content_gltf extension") {
  std::string string = R"(
    {
      "asset": {
        "version": "1.0"
      },
      "geometricError": 45.0,
      "root": {
        "boundingVolume": {
          "box": [0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0]
        },
        "geometricError": 15.0,
        "refine": "ADD",
        "transform": [1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0],
        "content": {
          "uri": "root.glb"
        }
      },
      "extensionsUsed": [
        "3DTILES_content_gltf"
      ],
      "extensionsRequired": [
        "3DTILES_content_gltf"
      ],
      "extensions": {
        "3DTILES_content_gltf": {
          "extensionsUsed": [
            "KHR_draco_mesh_compression",
            "KHR_materials_unlit"
          ],
          "extensionsRequired": [
            "KHR_draco_mesh_compression"
          ]
        }
      }
    }
  )";

  check(string, string);
}

TEST_CASE("Writes tileset JSON with custom extension") {
  std::string string = R"(
    {
      "asset": {
        "version": "1.0"
      },
      "geometricError": 45.0,
      "root": {
        "boundingVolume": {
          "box": [0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0]
        },
        "geometricError": 15.0,
        "refine": "ADD",
        "transform": [1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0]
      },
      "extensionsUsed": ["A", "B"],
      "extensions": {
        "A": {
          "test": "Hello"
        },
        "B": {
          "another": "Goodbye"
        }
      }
    }
  )";

  check(string, string);
}
