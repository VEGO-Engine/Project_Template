#pragma once

#include <string>
#include <map>
#include <memory>

#include <AnimationHandler.h>

namespace GAMESPACE::animations {
    inline std::map<std::string, std::unique_ptr<Animation>> animationMap;

    inline void initialize()
    {
        // In order to understand how to initialize animations it is important to understand how the library expects your spritesheet to be set up
        // the spritesheet should be a grid of frames, each frame being the same size (32x32 is currently supported)
        // the Animation map takes 2 parameters:
        // the name of the animation, and a unique pointer to an Animation object which takes 3 parameters:
        // the row of the spritesheet, the number of frames in that row, and the time it takes to animate through them in milliseconds
        // i.e animationMap.emplace("IDLE", std::make_unique<Animation>(0, 2, 200));
        // for further details with an example using a sprite sheet please refer to the VEGO documentation
    }
}