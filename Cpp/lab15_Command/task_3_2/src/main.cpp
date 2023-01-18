#include "controller.hpp"
#include "lamp.hpp"


int main()
{
  Lamp kitchenLamp = Lamp("Kitchen");
  Lamp hallLamp = Lamp("Hall");
  Lamp bedroomLamp = Lamp("Bedroom");
  Lamp bathroomLamp = Lamp("Bathroom");

  Controller controllerKitchenLamp = Controller();
  Controller controllerHallLamp = Controller();
  Controller controllerBedroomLamp = Controller();
  Controller controllerBathroomLamp = Controller();
  Controller controllerUniversal = Controller();

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
