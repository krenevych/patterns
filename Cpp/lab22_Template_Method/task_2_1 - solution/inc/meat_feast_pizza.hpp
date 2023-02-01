#pragma once
#include "pizza.hpp"


class MeatFeastPizza: public Pizza
{
public:
  void addToppings() override;
  void cook();
};
