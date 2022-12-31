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

  Car* cloneCar = car->clone();
  Car* cloneSportCar = sportCar->clone();

  std::cout << car->toString() << std::endl;
  std::cout << cloneCar->toString() << std::endl;
  std::cout << sportCar->toString() << std::endl;
  std::cout << cloneSportCar->toString() << std::endl;

  return 0;
}
