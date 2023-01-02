#include "micro_usb_chargers.h"


Charger::Charger(float voltage, float amperage)
: voltage(voltage), amperage(amperage) {}

Charger::~Charger() {}

float Charger::getOutputVoltage() const
{
  return this->voltage;
}

float Charger::getOutputAmperage() const
{
  return this->amperage;
}
