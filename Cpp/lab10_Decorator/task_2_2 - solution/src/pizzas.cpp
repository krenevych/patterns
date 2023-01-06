#include "pizzas.h"


//Pizza
Pizza::Pizza() {}

Pizza::~Pizza() {}

std::string Pizza::toString() const
{
  return "Pizza: " + this->description() + ", $" + std::to_string(this->cost());
}


//ThickCrustPizza
ThickCrustPizza::ThickCrustPizza() {}

ThickCrustPizza::~ThickCrustPizza() {}

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

ThinCrustPizza::~ThinCrustPizza() {}

std::string ThinCrustPizza::description() const
{
  return "ThinCrustPizza";
}

float ThinCrustPizza::cost() const
{
  return 2.0f;
}
