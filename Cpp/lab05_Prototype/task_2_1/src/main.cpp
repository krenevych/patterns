#include <iostream>

#include "car.hpp"
#include "suv.hpp"


int main()
{
  using namespace std;

  Car* mazda5 = new Car("Mazda 5", 150, 208);
  cout << *mazda5 << endl;

  Car* mazda5_clone = mazda5->clone();
  cout << *mazda5_clone << endl;

  SUV* mazda_cx5 = new SUV("Mazda CX5", 150, 208, false);
  cout << *mazda_cx5 << endl;

  SUV* mazda_cx5_clone = mazda_cx5->clone();
  cout << *mazda_cx5_clone << endl;

  return 0;
}
