#include <iostream>

#include "chocolate.hpp"
#include "coffee.hpp"
#include "tea.hpp"


void beverageInfo(Beverage& beverage)
{
  std::cout << "=========================" << std::endl;
  beverage.prepare();
  std::cout << "Cost of beverage: " << beverage.cost() << std::endl;
  beverage.drink();
}


int main()
{
  BlackChocolate blackChocolate{3, 200};
  BlackCoffee blackCoffee{3, 200, true};
  BlackTea blackTea{0, 300};

  beverageInfo(blackChocolate);
  beverageInfo(blackCoffee);
  beverageInfo(blackTea);

  MilkChocolate milkChocolate{3, 200};
  CoffeeWithMilk coffeeWithMilk{3, 200};
  TeaWithMilk teaWithMilk{2, 300};

  beverageInfo(milkChocolate);
  beverageInfo(coffeeWithMilk);
  beverageInfo(teaWithMilk);

  return 0;
}
