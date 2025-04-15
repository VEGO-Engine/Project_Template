#pragma once

#include <tuple>
#include <Entity.h>
#include <functional>

#include "TextureEnumImplementation.h"

namespace GAMESPACE
{
    namespace pickupables
    {
        //declare effect functions here
        //e.g. void speedEffect(Entity* entity);
        //with entity being the affected entity
        //i.e. the entity that walks over it and picks it up

        static std::vector<std::tuple<std::function<void (Entity*)>, Textures>> pickupableList =
        {
            // add tuples mapping an effect function to a texture here
            // it is recommended you use an enum implementation for this but using the texture path also works
            // e.g. std::make_tuple(speedEffect, Textures::speedPowerup)
            // the effect function should be called when the entity picks up the powerup i.e. collides with its collider
        };
    }
}