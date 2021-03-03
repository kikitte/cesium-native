#pragma once
#include "JsonWriter.h"
#include <CesiumGltf/WriteGLTFCallback.h>
#include <CesiumGltf/WriteFlags.h>
#include <CesiumGltf/Buffer.h>
#include <utility>
#include <vector>
#include <cstdint>

namespace CesiumGltf {
    void writeBuffer(
        const std::vector<Buffer>& buffers,
        JsonWriter& jsonWriter,
        WriteFlags flags,
        WriteGLTFCallback writeGLTFCallback = noopGltfWriter
    );
}