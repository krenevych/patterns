#pragma once
#include <string>
#include <iostream>

#include "engine.hpp"
#include "wheel.hpp"


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

  friend std::ostream& operator<<(std::ostream&, Car const&);

private:
  CarType const type;
  CarColor const color;
  Engine const engine;
  Wheel const wheel;
};
