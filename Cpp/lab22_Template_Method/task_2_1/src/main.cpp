#include "vegetarian_pizza.hpp"
#include "meat_feast_pizza.hpp"


int main()
{
  VegetarianPizza vegetarian;
  vegetarian.printInstructions();

  MeatFeastPizza meatFeast;
  meatFeast.printInstructions();

  return 0;
}
