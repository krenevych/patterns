#include <iostream>

#include "vegetarian_pizza.hpp"


void VegetarianPizza::addToppings()
{
  this->Pizza::addToppings();
  std::cout << "Add peppers" << std::endl
            << "Add olives" << std::endl;
}

void VegetarianPizza::cook()
{
    std::cout << "Cook in the oven for 15 minutes" << std::endl;
}
