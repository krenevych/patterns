#include "type_cchargers.h"


FastCharge::FastCharge(float power)
: power(power) {}

FastCharge::~FastCharge() {}

float FastCharge::getOutputPower() const
{
  return this->power;
}
