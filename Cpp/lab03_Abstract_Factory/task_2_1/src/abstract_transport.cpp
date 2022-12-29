#include "abstract_transport.h"


Bus::Bus(int cost, int usagecost)
: cost(cost), usagecost(usagecost) {}

Bus::~Bus() {}

int Bus::getCost()
{
  return this->cost;
}

int Bus::getUsageCost()
{
  return this->usagecost;
}


Tram::Tram(int cost, int usagecost)
: cost(cost), usagecost(usagecost) {}

Tram::~Tram() {}

int Tram::getCost()
{
  return this->cost;
}

int Tram::getUsageCost()
{
  return this->usagecost;
}


Trolleybus::Trolleybus(int cost, int usagecost)
: cost(cost), usagecost(usagecost) {}

Trolleybus::~Trolleybus() {}

int Trolleybus::getCost()
{
  return this->cost;
}

int Trolleybus::getUsageCost()
{
  return this->usagecost;
}
