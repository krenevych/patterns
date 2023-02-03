#include "controller.hpp"
#include "lamp.hpp"


int main()
{
  Lamp kitchenLamp{"Kitchen"};
  Lamp hallLamp{"Hall"};
  Lamp bedroomLamp{"Bedroom"};
  Lamp bathroomLamp{"Bathroom"};

  Controller controllerKitchenLamp;
  Controller controllerHallLamp;
  Controller controllerBedroomLamp;
  Controller controllerBathroomLamp;
  Controller controllerUniversal;

  // Simulation
  controllerKitchenLamp.on();
  controllerHallLamp.on();
  controllerBedroomLamp.on();

  controllerKitchenLamp.off();
  controllerHallLamp.off();
  controllerBedroomLamp.off();

  controllerBedroomLamp.on();
  controllerBathroomLamp.on();

  controllerUniversal.off();

  return 0;
}
