#include "lamp.hpp"

#include <iostream>


Lamp::Lamp(std::string const& name)
: name(name), isLightOn(false) {}

Lamp::Lamp()
: Lamp("default") {}

void Lamp::lightOn()
{
  if (this->isLightOn)
  {
    return;
  }

  std::cout << name << ": Light is on" << std::endl;
  this->isLightOn = true;
}

void Lamp::lightOff()
{
  if (!this->isLightOn)
  {
    return;
  }

  std::cout << name << ": Light is off" << std::endl;
  this->isLightOn = false;
}
