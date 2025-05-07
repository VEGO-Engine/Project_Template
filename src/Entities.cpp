#include "Entities.h"

#include "GameImplementation.h"

#include <VEGO.h>

namespace GAMESPACE {
    void Entities::initialize()
    {
        // define entities declared in Entities.h here using the manager
        // i.e. this->player1 = &VEGO_Game().manager.addEntity();

        

        // after adding new entities they can be given components which grant them different functionalities
        // i.e. this->player1->addComponent<TransformComponent>(posx, posy, scale);
        
        // Explanations of the functionalities for each component can be found in the documentation

        // it is also at this point that the entities stats can be initialized
        // do this after adding a DataComponent to the entity as you cannot initialize something that doesnt exist
        // see example in StatImplementation.h and StatImplementation.cpp
    }
}
