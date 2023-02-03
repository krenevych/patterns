#include "toppings.hpp"


//Toppings
Toppings::Toppings(Pizza const* pizza)
: pizza(pizza) {}


//Cheese
Cheese::Cheese(Pizza const* pizza)
: Toppings(pizza) {}

std::string Cheese::description() const
{
  return this->pizza->description() + " + Cheese";
}

float Cheese::cost() const
{
  return this->pizza->cost() + 0.5f;
}


//Olives
Olives::Olives(Pizza const* pizza)
: Toppings(pizza) {}

std::string Olives::description() const
{
  return this->pizza->description() + " + Olives";
}

float Olives::cost() const
{
  return this->pizza->cost() + 0.25f;
}

//Peppers
Peppers::Peppers(Pizza const* pizza)
: Toppings(pizza) {}

std::string Peppers::description() const
{
  return this->pizza->description() + " + Peppers";
}

float Peppers::cost() const
{
  return this->pizza->cost() + 1.5f;
}
