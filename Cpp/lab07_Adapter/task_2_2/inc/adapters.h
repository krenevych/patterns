#pragma once

#include "micro_usb_chargers.h"
#include "type_cchargers.h"


class AdapterMicroUsbToTypeC_Inheritance: public Charger, public TypeCCharger
{
public:
  AdapterMicroUsbToTypeC_Inheritance(float, float);
  ~AdapterMicroUsbToTypeC_Inheritance();
  float getOutputPower() const;
};


class AdapterMicroUsbToTypeC: public TypeCCharger
{
public:
  AdapterMicroUsbToTypeC(Charger const*);
  ~AdapterMicroUsbToTypeC();
  float getOutputPower() const;

private:
  Charger const* charger;
};


class AdapterTypeCToMicroUsb: public MicroUsbCharger
{
public:
  AdapterTypeCToMicroUsb(TypeCCharger const*);
  ~AdapterTypeCToMicroUsb();
  float getOutputVoltage() const;
  float getOutputAmperage() const;

private:
  TypeCCharger const* typeCCharger;
};
