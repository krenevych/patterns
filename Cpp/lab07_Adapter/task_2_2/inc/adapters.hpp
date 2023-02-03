#pragma once
#include "micro_usb_chargers.hpp"
#include "type_cchargers.hpp"


class AdapterMicroUsbToTypeC_Inheritance: public Charger, public TypeCCharger
{
public:
  AdapterMicroUsbToTypeC_Inheritance(float, float);
  float getOutputPower() const;
};


class AdapterMicroUsbToTypeC: public TypeCCharger
{
public:
  AdapterMicroUsbToTypeC(Charger const*);
  float getOutputPower() const;

private:
  Charger const* charger;
};


class AdapterTypeCToMicroUsb: public MicroUsbCharger
{
public:
  AdapterTypeCToMicroUsb(TypeCCharger const*);
  float getOutputVoltage() const;
  float getOutputAmperage() const;

private:
  TypeCCharger const* typeCCharger;
};
