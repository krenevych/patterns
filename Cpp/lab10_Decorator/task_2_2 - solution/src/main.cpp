#include <iostream>

#include "pizzas.hpp"
#include "toppings.hpp"


int main()
{
  using namespace std;

  Pizza* pizza = new ThickCrustPizza();
  pizza = new Cheese(pizza);
  pizza = new Peppers(pizza);
  pizza = new Cheese(pizza);
  pizza = new Peppers(pizza);
  pizza = new Olives(pizza);

  cout << *pizza << endl;

  return 0;
}
