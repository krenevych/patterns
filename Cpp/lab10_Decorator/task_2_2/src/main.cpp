#include <iostream>

#include "pizzas.h"


int main()
{
  using namespace std;

  Pizza* thick_pizza = new ThickCrustPizza();
  cout << thick_pizza->toString() << endl;

  Pizza* thin_pizza = new ThinCrustPizza();
  cout << thin_pizza->toString() << endl;

  return 0;
}
