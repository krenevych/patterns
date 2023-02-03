#include "abstract_transport.hpp"


Bus::Bus(int cost, int usagecost)
: cost(cost), usagecost(usagecost) {}

int Bus::getCost() const
{
  return this->cost;
}

int Bus::getUsageCost() const
{
  return this->usagecost;
}


Tram::Tram(int cost, int usagecost)
: cost(cost), usagecost(usagecost) {}

int Tram::getCost() const
{
  return this->cost;
}

int Tram::getUsageCost() const
{
  return this->usagecost;
}


Trolleybus::Trolleybus(int cost, int usagecost)
: cost(cost), usagecost(usagecost) {}

int Trolleybus::getCost() const
{
  return this->cost;
}

int Trolleybus::getUsageCost() const
{
  return this->usagecost;
}
