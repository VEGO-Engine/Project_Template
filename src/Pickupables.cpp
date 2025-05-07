#include "Pickupables.h"
#include <StatEffectsComponent.h>
#include <iostream>


// define effect functions here
// e.g. void MyGameNamespace::pickupables::speedEffect(Entity* entity);
// you can either make it a permanent effect e.g gaining a permanent +1 to speed
// or a temporary effect e.g. gaining a temporary +1 to speed for 5 seconds
// for this it is recommended to use the StatEffectsComponent
// which takes a duration and a lambda function that is called when the duration is over as parameters

// bonus tip: to change the value of certain stats you can use the DataComponent to modify and or add new stats/data for a specific entity
// more indepth explanation can be found in the documentation of the DataComponent
