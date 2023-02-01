#include <iostream>

#include "meat_feast_pizza.hpp"


void MeatFeastPizza::addToppings()
{
  this->Pizza::addToppings();
  std::cout << "Add pepperoni" << std::endl
            << "Add ham" << std::endl
            << "Add chicken" << std::endl;
}

void MeatFeastPizza::cook()
{
    std::cout << "Cook in the oven for 20 minutes" << std::endl;
}
