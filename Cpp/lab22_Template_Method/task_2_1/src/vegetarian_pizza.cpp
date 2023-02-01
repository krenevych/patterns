#include <iostream>

#include "vegetarian_pizza.hpp"


void VegetarianPizza::makeBase()
{
  std::cout << "Mix flour, yeast and salt" << std::endl
            << "Roll out the dough" << std::endl;
}

void VegetarianPizza::addToppings()
{
  std::cout << "Add tomato" << std::endl
            << "Add cheese" << std::endl
            << "Add peppers" << std::endl
            << "Add olives" << std::endl;
}

void VegetarianPizza::cook()
{
    std::cout << "Cook in the oven for 15 minutes" << std::endl;
}

void VegetarianPizza::printInstructions()
{
  this->makeBase();
  this->addToppings();
  this->cook();
  std::cout << std::endl;
}
