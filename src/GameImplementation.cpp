#include "GameImplementation.h"

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

vego::GameRegistryHelper<GAMESPACE::GameImplementation> registryHelper();

void GAMESPACE::GameImplementation::init()
{	// =====THIS IS THE STARTING POINT OF THE GAME=====
	loadTextures();
	loadSoundEffects();

	Map map(""/*insert filepath to .tmx file containing your map here*/);
	map.generateTiles();
	this->entities->initialize();
	GAMESPACE::animations::initialize();
	Controls::initControls();
}

void GAMESPACE::GameImplementation::update(uint_fast16_t diffTime)
{
	// place things you want to be executed and updated every frame here
}

std::optional<std::string> GAMESPACE::GameImplementation::setConfigFilePath() {
	// add your config file path here, a default one is given
	// you can either add a new one and change the path or just modify the default one (mainConfig.json)
	return std::optional<std::string>("./configs/mainConfig.json");
}

void GAMESPACE::GameImplementation::loadTextures() {
	// here textures and spritesheets are loaded into the texture manager
	// using an enum (declared in TextureEnumImplementation.h for readability) and the path to the texture
	// this is done as enums are more efficient than strings (paths) when used in the libraries internal functions
	VEGO_Game().textureManager->addTextures({
		//{Textures::player, "assets/player.png"},
		
	});
}

void GAMESPACE::GameImplementation::loadSoundEffects() {
	// same as with the textures, but using MusicAndSoundDeclaration.h
	VEGO_Game().soundManager->getInstance()->addSoundEffects({
		//{SoundEffects::eggThrow, "assets/sound/throw_egg.wav"}
	});
}
