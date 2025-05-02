#include "Entities.h"

#include "GameImplementation.h"

#include <VEGO.h>

namespace GAMESPACE {
    void Entities::initialize()
    {
        // assign in Entities.h defined entities here using the VEGO manager
        
        // i.e. this->player1 = &VEGO_Game().manager.addEntity();

        

        // after adding new entities they can be given components which grant them different functionalities
        // i.e. this->player1->addComponent<TransformComponent>(posx, posy, scale);
        
        // for more detailed explanation of the functionality of each component check the VEGO documentation
        // it is also at this point that the entities stats can be initialized
        // do this after giving it a data component as you cannot initialize something that doesnt exist
    }
}
