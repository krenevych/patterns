#pragma once
#include <string>
#include <iostream>

#include "cloneable.hpp"
#include "engine.hpp"
#include "wheel.hpp"


class Car: public Cloneable
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

  Car(CarType, CarColor, Engine&, Wheel&);
  Car(Car const&);
  Car* clone() const;

  friend std::ostream& operator<<(std::ostream& os, Car const&);

private:
  CarType const type;
  CarColor const color;
  Engine const engine;
  Wheel const wheel;
};
