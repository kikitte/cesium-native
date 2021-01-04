#pragma once

#include "CesiumGltf/NamedObject.h"
#include "CesiumGltf/Primitive.h"
#include <vector>
#include <string>

namespace CesiumGltf {
    /**
     * @brief A set of primitives to be rendered.
     * 
     * A {@link Node} can contain one mesh. A node's transform places the mesh in the scene.
     */
    struct Mesh : public NamedObject {
        /**
         * @brief An array of primitives, each defining geometry to be rendered with a material.
         */
        std::vector<Primitive> primitives;

        /**
         * @brief Array of weights to be applied to the Morph Targets.
         */
        std::vector<double> weights;
    };
}