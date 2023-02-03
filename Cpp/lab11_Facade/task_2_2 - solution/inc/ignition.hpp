#pragma once


class Ignition
{
public:
  Ignition();
  void turnOn();
  void turnOff();

private:
  bool isOn = false;
};
