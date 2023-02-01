#pragma once
#include "pizza.hpp"


class VegetarianPizza: public Pizza
{
public:
  void addToppings() override;
  void cook();
};
