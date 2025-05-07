#pragma once

#include <string>
#include <map>
#include <memory>

#include <AnimationHandler.h>

namespace GAMESPACE::animations {
    // declare animation maps here (it is recommended to create one map for every entities sprite sheet
    // as the Sprite component needs to get the entire map of an entity passed to animate it, see Spritecomponent in the documentation)
    // e.g. inline std::map<std::string, std::unique_ptr<Animation>> animationMap;

    inline void initialize()
    {
        // Add animations to a map for each entities sprite sheet
        // The first parameter is the name of the animation, the second is a unique pointer to the Animation object
        // i.e animationMap.emplace("IDLE", std::make_unique<Animation>(0, 2, 200));
        // see also: Animation
    }
}