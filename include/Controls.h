#pragma once

#include "Vector2D.h"
#include "Constants.h" // TODO: change so gamespecific constants are in own file
#include "SoundManager.h"
#include "InputComponent.h"

namespace GAMESPACE::Controls
{	
	// using this function you can implement controls for the game in the init() function of GameImplementation.cpp
	// see also Controls.cpp
	void initControls();
};
