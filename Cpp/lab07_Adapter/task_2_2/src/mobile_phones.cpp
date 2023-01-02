#include "mobile_phones.h"

#include <iostream>
#include <cmath>


//SamsungS7
SamsungS7::SamsungS7() {}

SamsungS7::~SamsungS7() {}

int SamsungS7::getChargingPercent() const
{
  return this->chargingPercent;
}

void SamsungS7::call(float time)
{
  if (this->chargingPercent < time)
  {
    std::cout << "Charge mobile phone!" << std::endl;
    return;
  }

  this->chargingPercent += time;
  std::cout << "Calling..." << std::endl;
}

void SamsungS7::pluginCharger(MicroUsbCharger const* charger)
{
  this->charger = charger;
  std::cout << "plugin micro usb charger!" << std::endl;
}

void SamsungS7::unplugCharger()
{
  std::cout << "unplug charger!" << std::endl;
  this->charger = nullptr;
}

void SamsungS7::charge(int time)
{
  if (this->charger == nullptr)
  {
    std::cout << "Plugin micro usb charger" << std::endl;
    return;
  }

  float timeH = time / 9.0f;
  float power = charger->getOutputAmperage() * charger->getOutputVoltage();
  int percent = this->chargingPercent + static_cast<int>(power * timeH);
  this->chargingPercent = std::min(percent, 100);
}


//SamsungS22
SamsungS22::SamsungS22() {}

SamsungS22::~SamsungS22() {}

int SamsungS22::getChargingPercent() const
{
  return this->chargingPercent;
}

void SamsungS22::makeCall()
{
  if (this->chargingPercent > 5)
  {
    std::cout << "Calling..." << std::endl;
    this->chargingPercent -= 5;
    return;
  }

  std::cout << "To make a call, please charge the phone!" << std::endl;
}

void SamsungS22::pluginCharger(TypeCCharger const* charger)
{
    this->charger = charger;
    std::cout << "plugin charger!" << std::endl;
}

void SamsungS22::unplugCharger()
{
  std::cout << "unplug charger!" << std::endl;
  this->charger = nullptr;
}

void SamsungS22::charge(int time)
{
  if (charger == nullptr)
  {
    std::cout << "Plugin micro usb charger" << std::endl;
    return;
  }

  float timeH = time / 9.0f;
  int percent = chargingPercent + static_cast<int>(charger->getOutputPower() * timeH);
  this->chargingPercent = std::min(percent, 100);
}
