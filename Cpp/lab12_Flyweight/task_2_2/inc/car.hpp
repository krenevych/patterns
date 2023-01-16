#pragma once

#include <string>

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

  explicit Car(CarType const&, CarColor const&, Engine const&, Wheel const&);
  ~Car();
  friend std::ostream& operator<<(std::ostream&, Car const&);

private:
  CarType const type;
  CarColor const color;
  Engine const engine;
  Wheel const wheel;
};
