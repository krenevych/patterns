#include <iostream>

#include "meat_feast_pizza.hpp"


void MeatFeastPizza::makeBase()
{
  std::cout << "Mix flour, yeast and salt" << std::endl
            << "Roll out the dough" << std::endl;
}

void MeatFeastPizza::addToppings()
{
  std::cout << "Add tomato" << std::endl
            << "Add cheese" << std::endl
            << "Add pepperoni" << std::endl
            << "Add ham" << std::endl
            << "Add chicken" << std::endl;
}

void MeatFeastPizza::cook()
{
    std::cout << "Cook in the oven for 20 minutes" << std::endl;
}

void MeatFeastPizza::printInstructions()
{
  this->makeBase();
  this->addToppings();
  this->cook();
  std::cout << std::endl;
}
