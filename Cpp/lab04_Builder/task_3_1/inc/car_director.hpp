#pragma once
#include "car_builder.hpp"


class CarDirector
{
public:
  CarDirector();
  void setCarBuilder(CarBuilder*);
  Car* makeDefaultCar();
  Car* makeSportCar();
  Car* makeSUV();

private:
  CarBuilder* carBuilder;
};
