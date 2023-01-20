#include "runway.hpp"


Runway::Runway()
: isAvailable(true) {}

void Runway::setIsAvailable(bool isAvailable)
{
  this->isAvailable = isAvailable;
}

bool Runway::getIsAvailable() const
{
  return this->isAvailable;
}
