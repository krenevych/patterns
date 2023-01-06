#include "beverages.h"

#include <iostream>


int main()
{
  using namespace std;

  Beverage* espresso = new Espresso();
  cout << espresso->toString() << endl;

  Beverage* darkRoast = new DarkRoast();
  cout << darkRoast->toString() << endl;

  return 0;
}
