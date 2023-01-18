#include "controller.hpp"
#include "lamp.hpp"


int main()
{
  Lamp lamp = Lamp();

  Controller controller = Controller();

  // Simulation
  controller.on();
  controller.on();
  controller.off();
  controller.off();
  controller.on();
  controller.on();
  controller.off();

  return 0;
}
