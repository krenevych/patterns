#pragma once
#include <string>


class Lamp
{
public:
  Lamp(std::string const&);
  Lamp();
  void lightOn();
  void lightOff();

private:
  std::string const name;
  bool isLightOn;
};
