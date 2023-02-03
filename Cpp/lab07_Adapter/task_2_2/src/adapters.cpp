#include <cassert>
#include <cmath>

#include "adapters.hpp"


//AdapterMicroUsbToTypeC_Inheritance
AdapterMicroUsbToTypeC_Inheritance::AdapterMicroUsbToTypeC_Inheritance(float voltage, float amperage)
: Charger(voltage, amperage) {}

float AdapterMicroUsbToTypeC_Inheritance::getOutputPower() const
{
  return this->getOutputAmperage() * this->getOutputVoltage();
}


//AdapterMicroUsbToTypeC
AdapterMicroUsbToTypeC::AdapterMicroUsbToTypeC(Charger const* charger)
: charger(charger)
{
  assert(charger != nullptr);
}

float AdapterMicroUsbToTypeC::getOutputPower() const
{
  return charger->getOutputAmperage() * charger->getOutputVoltage();
}


//AdapterTypeCToMicroUsb
AdapterTypeCToMicroUsb::AdapterTypeCToMicroUsb(TypeCCharger const* typeCCharger)
: typeCCharger(typeCCharger) {}

float AdapterTypeCToMicroUsb::getOutputVoltage() const
{
  return 5.0f;
}

float AdapterTypeCToMicroUsb::getOutputAmperage() const
{
  float amperage = typeCCharger->getOutputPower() / this->getOutputVoltage();
  return std::min(amperage, 1.5f);
}
