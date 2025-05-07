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

void GAMESPACE::Controls::initControls()
{
	// using VEGO_Game().inputManager->registerAction() it is possible to assign buttons to actions
	// e.g. 
	// VEGO_Game().inputManager->registerAction("ButtonPress", {InputManager::Key::A, InputManager::Key::LEFT}, [](bool isKeyUp) {
	// 	if (isKeyUp){
	// 		std::cout << "Button was released!" << std::endl;
	// 		return;
	// 	}
	//   std::cout << "Button was pressed!" << std::endl;
	// }, "Gameplay");
	// if actions need access to resources such as player data, pass it accordingly to the initControls function
	// and capture it correctly in the lambdas if you choose to use them
}
