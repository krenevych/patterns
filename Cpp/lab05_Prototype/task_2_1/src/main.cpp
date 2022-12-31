#include <iostream>

#include "car.h"
#include "suv.h"


int main()
{
  Car* mazda5 = new Car("Mazda 5", 150, 208);
  std::cout << mazda5->toString() << std::endl;

  Car* mazda5_clone = mazda5->clone();
  std::cout << mazda5_clone->toString() << std::endl;

  SUV* mazda_cx5 = new SUV("Mazda CX5", 150, 208, false);
  std::cout << mazda_cx5->toString() << std::endl;

  SUV* mazda_cx5_clone = mazda_cx5->clone();
  std::cout << mazda_cx5_clone->toString() << std::endl;

  return 0;
}
