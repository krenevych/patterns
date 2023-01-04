#include <iostream>

#include "chocolate.h"
#include "coffee.h"
#include "tea.h"


void beverageInfo(Beverage& beverage)
{
  std::cout << "=========================" << std::endl;
  beverage.prepare();
  std::cout << "Cost of beverage: " << beverage.cost() << std::endl;
  beverage.drink();
}


int main()
{
  BlackChocolate blackChocolate = BlackChocolate(3, 200);
  BlackCoffee blackCoffee = BlackCoffee(3, 200, true);
  BlackTea blackTea = BlackTea(0, 300);

  beverageInfo(blackChocolate);
  beverageInfo(blackCoffee);
  beverageInfo(blackTea);

  MilkChocolate milkChocolate = MilkChocolate(3, 200);
  CoffeeWithMilk coffeeWithMilk = CoffeeWithMilk(3, 200);
  TeaWithMilk teaWithMilk = TeaWithMilk(2, 300);

  beverageInfo(milkChocolate);
  beverageInfo(coffeeWithMilk);
  beverageInfo(teaWithMilk);

  return 0;
}
