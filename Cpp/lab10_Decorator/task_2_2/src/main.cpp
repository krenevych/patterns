#include <iostream>

#include "pizzas.h"


int main()
{
  using namespace std;

  ThickCrustPizza thick_pizza = ThickCrustPizza();
  std::cout << thick_pizza.toString() << std::endl;

  ThinCrustPizza thin_pizza = ThinCrustPizza();
  std::cout << thin_pizza.toString() << std::endl;

  return 0;
}
