#include "micro_usb_chargers.hpp"


Charger::Charger(float voltage, float amperage)
: voltage(voltage), amperage(amperage) {}

float Charger::getOutputVoltage() const
{
  return this->voltage;
}

float Charger::getOutputAmperage() const
{
  return this->amperage;
}
