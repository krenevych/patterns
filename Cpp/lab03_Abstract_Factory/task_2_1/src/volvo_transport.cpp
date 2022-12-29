#include "volvo_transport.h"

#include <iostream>


VolvoBus::VolvoBus()
: Bus(6000000, 20) {}

VolvoBus::~VolvoBus() {}

void VolvoBus::goByWay()
{
  std::cout << "Volvo Bus runs!" << std::endl;
}


VolvoTram::VolvoTram()
: Tram(10000000, 7) {}

VolvoTram::~VolvoTram() {}

void VolvoTram::goByRails()
{
  std::cout << "Volvo Tram goes!" << std::endl;
}


VolvoTrolleybus::VolvoTrolleybus()
: Trolleybus(7000000, 13) {}

VolvoTrolleybus::~VolvoTrolleybus() {}

void VolvoTrolleybus::goByContactNetwork()
{
  std::cout << "Volvo Trolleybus runs!" << std::endl;
}
