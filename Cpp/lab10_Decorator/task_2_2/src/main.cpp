#include <iostream>

#include "pizzas.h"


int main()
{
  using namespace std;

  ThickCrustPizza thick_pizza = ThickCrustPizza();
  cout << thick_pizza.toString() << endl;

  ThinCrustPizza thin_pizza = ThinCrustPizza();
  cout << thin_pizza.toString() << endl;

  return 0;
}
