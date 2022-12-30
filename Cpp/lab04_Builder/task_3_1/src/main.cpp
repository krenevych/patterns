#include <iostream>

#include "car_builder.h"
#include "car_director.h"


int main()
{
  CarBuilder* carBuilder = new CarBuilder();

  CarDirector* director = new CarDirector();
  director->setCarBuilder(carBuilder);

  Car* car = director->makeDefaultCar();
  Car* sportCar = director->makeSportCar();
  Car* suv = director->makeSUV();

  std::cout << car->toString() << std::endl;
  std::cout << sportCar->toString() << std::endl;
  std::cout << suv->toString() << std::endl;

  return 0;
}
