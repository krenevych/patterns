#pragma once

#include <string>

#include "engine.h"
#include "wheel.h"


class Car
{
public:
  enum class CarColor
  {
    White,
    Black,
    Red,
    Grey
  };

  enum class CarType
  {
    Sedan,
    Hatchback,
    SUV
  };

  Car(CarType, CarColor, Engine, Wheel);
  ~Car();
  std::string toString() const;

private:
  const CarType type;
  const CarColor color;
  const Engine engine;
  const Wheel wheel;
};
