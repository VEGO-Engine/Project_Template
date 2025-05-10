#pragma once

#include <memory>
#include <optional>

#include <Game.h>
#include <GameRegistryHelper.h>
#include <HealthComponent.h>
#include <Entity.h>

#include "Entities.h"
#include "TextureEnumImplementation.h"

namespace GAMESPACE
{
	class GameImplementation : public Game {
	public:

		void init() override;
		void update(uint_fast16_t diffTime) override;
		std::optional<std::string> setConfigFilePath() override;

	private:
		void loadTextures();
		void loadSoundEffects();
		Entities* entities = new Entities();
	};
};
