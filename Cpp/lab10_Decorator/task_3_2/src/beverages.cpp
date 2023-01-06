#include "beverages.h"


//Beverage
std::string Beverage::toString() const
{
  return "Beverage: " + this->description() + ", $" + std::to_string(this->cost());
}


//DarkRoast
DarkRoast::DarkRoast() {}

DarkRoast::~DarkRoast() {}

std::string DarkRoast::description() const
{
  return "Dark Roast";
}

float DarkRoast::cost() const
{
  return 1.0f;
}


//Decaf
Decaf::Decaf() {}

Decaf::~Decaf() {}

std::string Decaf::description() const
{
  return "Decaf";
}

float Decaf::cost() const
{
  return 0.5f;
}


//Espresso
Espresso::Espresso() {}

Espresso::~Espresso() {}

std::string Espresso::description() const
{
  return "Espresso";
}

float Espresso::cost() const
{
  return 0.75f;
}
