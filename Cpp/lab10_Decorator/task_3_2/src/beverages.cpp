#include "beverages.hpp"


//Beverage
std::ostream& operator<<(std::ostream& os, Beverage const& beverage)
{
  os << "Beverage: " << beverage.description() << ", $" << beverage.cost();

  return os;
}


//DarkRoast
DarkRoast::DarkRoast() {}

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

std::string Espresso::description() const
{
  return "Espresso";
}

float Espresso::cost() const
{
  return 0.75f;
}
