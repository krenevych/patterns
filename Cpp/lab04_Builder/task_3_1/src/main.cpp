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
  Car* suv = director.makeSUV();

  cout << *car << endl;
  cout << *sportCar << endl;
  cout << *suv << endl;

  return 0;
}
