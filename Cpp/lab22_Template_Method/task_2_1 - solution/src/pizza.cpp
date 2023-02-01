#include <iostream>

#include "pizza.hpp"


void Pizza::makeBase()
{
  std::cout << "Mix flour, yeast and salt" << std::endl
            << "Roll out the dough" << std::endl;
}

void Pizza::addToppings()
{
  std::cout << "Add tomato" << std::endl
            << "Add cheese" << std::endl;
}

void Pizza::printInstructions()
{
  this->makeBase();
  this->addToppings();
  this->cook();
  std::cout << std::endl;
}
