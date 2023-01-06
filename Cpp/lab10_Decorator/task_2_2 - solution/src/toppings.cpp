#include "toppings.h"


//Toppings
Toppings::Toppings(Pizza const* pizza)
: pizza(pizza) {}

Toppings::~Toppings() {}


//Cheese
Cheese::Cheese(Pizza const* pizza)
: Toppings(pizza) {}

Cheese::~Cheese() {}

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

Olives::~Olives() {}

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

Peppers::~Peppers() {}

std::string Peppers::description() const
{
  return this->pizza->description() + " + Peppers";
}

float Peppers::cost() const
{
  return this->pizza->cost() + 1.5f;
}
