#include "gear_stick.h"

#include <iostream>


GearStick::GearStick() {}

GearStick::~GearStick() {}

void GearStick::changeGear(int gear)
{
  std::cout << "Changing gear to " << gear << std::endl;
  this->gear = gear;
}
