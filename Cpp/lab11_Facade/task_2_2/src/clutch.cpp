#include <iostream>

#include "clutch.hpp"


Clutch::Clutch() {}

void Clutch::press()
{
  std::cout << "Pressing clutch down" << std::endl;
}

void Clutch::lift()
{
  std::cout << "Lifting clutch up" << std::endl;
}
