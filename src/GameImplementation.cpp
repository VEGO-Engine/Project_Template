#include "GameImplementation.h"

#include "Pickupables.h"
#include "SDL3/SDL_render.h"
#include "SDL3/SDL_surface.h"
#include "Animations.h"

#include "TextureEnumImplementation.h"

#include <iostream>
#include <vector>
#include <map>
#include <GameInternal.h>
#include <HealthComponent.h>
#include <InputComponent.h>
#include <Map.h>
#include <VEGO.h>
#include <TextureManager.h>
#include <SoundManager.h>

#include "MusicAndSoundDeclaration.h"
#include "Controls.h"

vego::GameRegistryHelper<GAMESPACE::GameImplementation> registryHelper("GAMESPACE");

void GAMESPACE::GameImplementation::init()
{
	// it is highly recommended to keep all of these premade functions here
	// as this is a central place for most assets associated with the game get loaded in
	// especially the entities as making them a singleton has proven to work the smoothest in the current setup
	loadTextures();
	loadSoundEffects();

	Map map(""/*insert filepath to .tmx file containing your map here*/);
	map.generateTiles();
	Controls::initControls();
	GAMESPACE::animations::initialize();
	Entities::getInstance().initialize();
}

void GAMESPACE::GameImplementation::update(uint_fast16_t diffTime)
{
	// place things you want to be executed every frame here
}

std::optional<std::string> GAMESPACE::GameImplementation::setConfigFilePath() {
	// add your config file path here, a default one is given
	// you can either add a new one and change the path or just modify the default one
	return std::optional<std::string>("./configs/mainConfig.json");
}

void GAMESPACE::GameImplementation::loadTextures() {
	// here textures and spritesheets are loaded into the texture manager
	VEGO_Game().textureManager->addTextures({
		//{Textures::charSelection, "assets/characterSelection.png"},
		
	});
	std::cout << "Texture-Map created" << std::endl;
}

void GAMESPACE::GameImplementation::loadSoundEffects() {
	VEGO_Game().soundManager->getInstance()->addSoundEffects({
		//{SoundEffects::eggThrow, "assets/sound/throw_egg.wav"}
	});
	std::cout << "SoundEffects-Map created" << std::endl;
}
