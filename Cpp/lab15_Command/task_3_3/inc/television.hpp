#pragma once
#include "device.hpp"


class Television: public Device
{
public:
  Television();
  void on();
  void off();
  void volumeUp();
  void volumeDown();
  void nextChanel();
  void prevChanel();

private:
  int volume;
  int chanel;
  bool isOn;
};
