#include "pizzas.hpp"


//Pizza
Pizza::Pizza() {}

std::ostream& operator<<(std::ostream& os, Pizza const& pizza)
{
  os << "Pizza: " << pizza.description() << ", $" << pizza.cost();

  return os;
}


//ThickCrustPizza
ThickCrustPizza::ThickCrustPizza() {}

std::string ThickCrustPizza::description() const
{
  return "ThickCrustPizza";
}

float ThickCrustPizza::cost() const
{
  return 2.5f;
}


//ThinCrustPizza
ThinCrustPizza::ThinCrustPizza() {}

std::string ThinCrustPizza::description() const
{
  return "ThinCrustPizza";
}

float ThinCrustPizza::cost() const
{
  return 2.0f;
}
