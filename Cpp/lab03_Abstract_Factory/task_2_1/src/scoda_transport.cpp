#include "scoda_transport.h"

#include <iostream>


ScodaBus::ScodaBus()
: Bus(4500000, 25) {}

ScodaBus::~ScodaBus() {}

void ScodaBus::goByWay()
{
  std::cout << "Skoda Bus runs!" << std::endl;
}


ScodaTram::ScodaTram()
: Tram(9000000, 8) {}

ScodaTram::~ScodaTram() {}

void ScodaTram::goByRails()
{
  std::cout << "Skoda Tram goes!" << std::endl;
}


ScodaTrolleybus::ScodaTrolleybus()
: Trolleybus(6800000, 13) {}

ScodaTrolleybus::~ScodaTrolleybus() {}

void ScodaTrolleybus::goByContactNetwork()
{
  std::cout << "Skoda Trolleybus runs!" << std::endl;
}
