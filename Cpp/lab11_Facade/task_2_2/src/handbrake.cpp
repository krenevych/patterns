#include "handbrake.h"

#include <iostream>


Handbrake::Handbrake() {}

Handbrake::~Handbrake() {}

void Handbrake::pushDown()
{
  std::cout << "Pushing down handbrake" << std::endl;
  this->isUp = false;
}

void Handbrake::liftUp()
{
  std::cout << "Lifting up handbrake" << std::endl;
  this->isUp = true;
}
