#include <iostream>

#include "volvo_transport.hpp"


VolvoBus::VolvoBus()
: Bus(6'000'000, 20) {}

void VolvoBus::goByWay()
{
  std::cout << "Volvo Bus runs!" << std::endl;
}


VolvoTram::VolvoTram()
: Tram(10'000'000, 7) {}

void VolvoTram::goByRails()
{
  std::cout << "Volvo Tram goes!" << std::endl;
}


VolvoTrolleybus::VolvoTrolleybus()
: Trolleybus(7'000'000, 13) {}

void VolvoTrolleybus::goByContactNetwork()
{
  std::cout << "Volvo Trolleybus runs!" << std::endl;
}
