#include <iostream>

#include "scoda_transport.hpp"


ScodaBus::ScodaBus()
: Bus(4'500'000, 25) {}

void ScodaBus::goByWay()
{
  std::cout << "Skoda Bus runs!" << std::endl;
}


ScodaTram::ScodaTram()
: Tram(9'000'000, 8) {}

void ScodaTram::goByRails()
{
  std::cout << "Skoda Tram goes!" << std::endl;
}


ScodaTrolleybus::ScodaTrolleybus()
: Trolleybus(6'800'000, 13) {}

void ScodaTrolleybus::goByContactNetwork()
{
  std::cout << "Skoda Trolleybus runs!" << std::endl;
}
