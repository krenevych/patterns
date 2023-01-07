#pragma once


class Ignition
{
public:
  Ignition();
  ~Ignition();
  void turnOn();
  void turnOff();

private:
  bool isOn = false;
};
