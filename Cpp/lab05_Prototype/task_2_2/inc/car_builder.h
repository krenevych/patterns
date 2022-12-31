#pragma once

#include "engine.h"
#include "wheel.h"
#include "car.h"


class CarBuilder
{
public:
  CarBuilder();
  ~CarBuilder();
  CarBuilder* reset();
  Car* build();
  CarBuilder* setType(Car::CarType);
  CarBuilder* setCarColor(Car::CarColor);
  CarBuilder* setEngine(Engine*);
  CarBuilder* setWheel(Wheel*);

private:
  Car::CarType carType;
  Car::CarColor carColor;
  Engine* engine;
  Wheel* wheel;
};
