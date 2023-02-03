#include "type_cchargers.hpp"


FastCharge::FastCharge(float power)
: power(power) {}

float FastCharge::getOutputPower() const
{
  return this->power;
}
