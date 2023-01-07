#include "ignition.h"

#include <iostream>


Ignition::Ignition() {}

Ignition::~Ignition() {}

void Ignition::turnOn()
{
  std::cout << "Turning ignition on" << std::endl;
  this->isOn = true;
}

void Ignition::turnOff()
{
  std::cout << "Turning ignition off" << std::endl;
  this->isOn = false;
}
