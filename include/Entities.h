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
#include "StatImplementation.h"

namespace GAMESPACE
{
    class GameImplementation;

    class Entities
    {
    public:
        static Entities& getInstance()
        {
            static Entities instance;
            return instance;
        }

        void initialize();

    private:
        Entities() {}

        ~Entities() {}

        Entities(const Entities&) = delete;
        Entities& operator=(const Entities&) = delete;

        // to add new Entities declare them here
        // i.e Entity* player1;
        // once declared here and implemented in Entities.cpp you can freely add components to them (also in Entities.cpp)
    };
}
