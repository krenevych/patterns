#include <iostream>

#include "pizzas.h"
#include "toppings.h"


int main()
{
  using namespace std;

  Pizza* pizza = new ThickCrustPizza();
  pizza = new Cheese(pizza);
  pizza = new Peppers(pizza);
  pizza = new Cheese(pizza);
  pizza = new Peppers(pizza);
  pizza = new Olives(pizza);

  cout << pizza->toString() << endl;

  return 0;
}
