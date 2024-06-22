#include "MyGame.h"

#include <GameRegistryHelper.h>

vego::GameRegistryHelper<MyGameNamespace::MyGame> registerGame("Chickengame"); // don't change name while we aren't using configs, or else class will not be called

void MyGameNamespace::MyGame::init()
{
	std::cout << "INIT!" << std::endl; 
}

void MyGameNamespace::MyGame::update()
{
	std::cout << "UPDATE!" << std::endl;
}