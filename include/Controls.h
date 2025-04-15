#pragma once

#include "Vector2D.h"
#include "Constants.h" // TODO: change so gamespecific constants are in own file
#include "SoundManager.h"
#include "InputComponent.h"

namespace chickengame::Controls
{	
	// using this function register controls for the game
	// it is recommended to use lambdas for the actions as they are easier to read and understand
	// see Controls.cpp
	void initControls();
};
