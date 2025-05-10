#include "Controls.h"

#include "GameInternal.h"
#include "MusicAndSoundDeclaration.h"
#include "SpriteComponent.h"
#include "TextureEnumImplementation.h"
#include "TransformComponent.h"
#include "Entities.h"
#include <DataComponent.h>
#include <InteractionEventdataStruct.h>
#include <VEGO_Event.h>
#include <VEGO.h>
#include <Entity.h>

// This function gets called in GameImplementation.cpp in the init() function
void GAMESPACE::Controls::initControls(/*Pass entities etc. you need access to here and in the .h*/)
{
	// using VEGO_Game().inputManager->registerAction() it is possible to assign buttons to actions

	// e.g. 
	// VEGO_Game().inputManager->registerAction("WalkLeft", {InputManager::Key::A, InputManager::Key::LEFT}, [](bool isKeyUp) {
	// 	if (isKeyUp){
	// 		std::cout << Walking was stopped << std::endl;
	// 		return;
	// 	}
	//   std::cout << Walking" << std::endl;
	// });

	// Dont forget to properly capture things in the lambda function
}
