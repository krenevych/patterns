#include "pizzas.h"


//Pizza
Pizza::Pizza() {}

Pizza::~Pizza() {}

std::string Pizza::toString()
{
  return "Pizza: " + this->description() + ", $" + std::to_string(this->cost());
}


//ThickCrustPizza
ThickCrustPizza::ThickCrustPizza() {}

ThickCrustPizza::~ThickCrustPizza() {}

std::string ThickCrustPizza::description()
{
  return "ThickCrustPizza";
}

float ThickCrustPizza::cost()
{
  return 2.5f;
}


//ThinCrustPizza
ThinCrustPizza::ThinCrustPizza() {}

ThinCrustPizza::~ThinCrustPizza() {}

std::string ThinCrustPizza::description()
{
  return "ThinCrustPizza";
}

float ThinCrustPizza::cost()
{
  return 2.0f;
}
