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
	// it takes 4 parameters:
	// 1. the name you want to assign to the action (string)
	// 2. a vector of keys that trigger the action (vector of InputManager::Key enum values)
	// 3. a lambda function that is called when the action is triggered (std::function<void(bool)>)
	// here it is important to always define what should happen when the key is up, if nothing should happen just add a return statement
	// 4. the context in which the action is valid (string) any name can be chosen
	// i.e. 
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
