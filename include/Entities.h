#pragma once

#include <unordered_map>
#include <vector> // Ensure vector is included for std::vector
#include "Entity.h" // Ensure you have the correct include paths
#include "Game.h"
#include "GameInternal.h"
#include "Manager.h"
#include "SpriteComponent.h"
#include "InputComponent.h"
#include "StatEffectsComponent.h"
#include "HealthComponent.h"
#include "TransformComponent.h"
#include "DataComponent.h"
#include "Animations.h"
#include "SoundEffects.h"

namespace GAMESPACE
{
    class Entities
    {
    public:
        void initialize();

        // to add new Entities declare them here
        // i.e Entity* player1;
        // once declared here and implemented in Entities.cpp you can freely add components to them (also in Entities.cpp)
    };
}
