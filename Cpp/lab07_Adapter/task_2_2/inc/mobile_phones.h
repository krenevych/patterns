#pragma once

#include "micro_usb_chargers.h"
#include "type_cchargers.h"


class MobilePhone
{
public:
  virtual int getChargingPercent() const = 0;
};


class SamsungS7: public MobilePhone
{
public:
  SamsungS7();
  ~SamsungS7();
  int getChargingPercent() const;
  void call(float);
  void pluginCharger(MicroUsbCharger const*);
  void unplugCharger();
  void charge(int);

private:
  int chargingPercent = 0;
  MicroUsbCharger const* charger = nullptr;
};


class SamsungS22: public MobilePhone
{
public:
  SamsungS22();
  ~SamsungS22();
  int getChargingPercent() const;
  void makeCall();
  void pluginCharger(TypeCCharger const*);
  void unplugCharger();
  void charge(int);

private:
  int chargingPercent = 0;
  TypeCCharger const* charger = nullptr;
};
