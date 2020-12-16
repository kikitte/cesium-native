#pragma once

#include "Cesium3DTiles/Library.h"
#include <spdlog/sinks/base_sink.h>
#include <memory>
#include <mutex>

namespace CesiumAsync {
    class IAssetAccessor;
    class ITaskProcessor;
}

namespace Cesium3DTiles {
    class IPrepareRendererResources;

    /**
     * @brief External interfaces used by a {@link Tileset}.
     * 
     * Not supposed to be used by clients.
     */
    class CESIUM3DTILES_API TilesetExternals final {
    public:

        /**
         * @brief An external {@link IAssetAccessor}.
         */
        std::shared_ptr<CesiumAsync::IAssetAccessor> pAssetAccessor;

        /**
         * @brief An external {@link IPrepareRendererResources}.
         */
        std::shared_ptr<IPrepareRendererResources> pPrepareRendererResources;

        /**
         * @brief An external {@link ITaskProcessor}
         */
        std::shared_ptr<CesiumAsync::ITaskProcessor> pTaskProcessor;

        /**
         * @brief An spdlog sink that will receive log messages.
         */
        std::shared_ptr<spdlog::sinks::base_sink<std::mutex>> pLogSink;
    };

}
