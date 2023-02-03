#include <iostream>

#include "beverages.hpp"


int main()
{
  using namespace std;

  Beverage* espresso = new Espresso();
  cout << *espresso << endl;

  Beverage* darkRoast = new DarkRoast();
  cout << *darkRoast << endl;

  return 0;
}
