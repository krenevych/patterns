#include <iostream>

#include "gear_stick.hpp"


GearStick::GearStick() {}

void GearStick::changeGear(int gear)
{
  std::cout << "Changing gear to " << gear << std::endl;
  this->gear = gear;
}
