#include "adapters.h"

#include <cassert>
#include <cmath>


//AdapterMicroUsbToTypeC_Inheritance
AdapterMicroUsbToTypeC_Inheritance::AdapterMicroUsbToTypeC_Inheritance(float voltage, float amperage)
: Charger(voltage, amperage) {}

AdapterMicroUsbToTypeC_Inheritance::~AdapterMicroUsbToTypeC_Inheritance() {}

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

AdapterMicroUsbToTypeC::~AdapterMicroUsbToTypeC() {}

float AdapterMicroUsbToTypeC::getOutputPower() const
{
  return charger->getOutputAmperage() * charger->getOutputVoltage();
}


//AdapterTypeCToMicroUsb
AdapterTypeCToMicroUsb::AdapterTypeCToMicroUsb(TypeCCharger const* typeCCharger)
: typeCCharger(typeCCharger) {}

AdapterTypeCToMicroUsb::~AdapterTypeCToMicroUsb() {}

float AdapterTypeCToMicroUsb::getOutputVoltage() const
{
  return 5.0f;
}

float AdapterTypeCToMicroUsb::getOutputAmperage() const
{
  float amperage = typeCCharger->getOutputPower() / this->getOutputVoltage();
  return std::min(amperage, 1.5f);
}
