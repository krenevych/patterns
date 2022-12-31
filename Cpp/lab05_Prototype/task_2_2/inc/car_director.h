#pragma once

#include "car_builder.h"


class CarDirector
{
public:
  CarDirector();
  ~CarDirector();
  void setCarBuilder(CarBuilder*);
  Car* makeDefaultCar();
  Car* makeSportCar();
  Car* makeSUV();

private:
  CarBuilder* carBuilder;
};
