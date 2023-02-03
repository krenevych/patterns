#include <iostream>

#include "car_builder.hpp"
#include "car_director.hpp"


int main()
{
  using namespace std;

  CarBuilder carBuilder{};

  CarDirector director;
  director.setCarBuilder(&carBuilder);

  Car* car = director.makeDefaultCar();
  Car* sportCar = director.makeSportCar();

  Car* cloneCar = car->clone();
  Car* cloneSportCar = sportCar->clone();

  cout << *car << endl;
  cout << *cloneCar << endl;
  cout << *sportCar << endl;
  cout << *cloneSportCar << endl;

  return 0;
}
