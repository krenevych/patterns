#include <iostream>

#include "pizzas.hpp"


int main()
{
  using namespace std;

  Pizza* thick_pizza = new ThickCrustPizza();
  cout << *thick_pizza << endl;

  Pizza* thin_pizza = new ThinCrustPizza();
  cout << *thin_pizza << endl;

  return 0;
}
