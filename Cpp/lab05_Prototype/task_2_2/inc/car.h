#pragma once

#include <string>

#include "cloneable.h"
#include "engine.h"
#include "wheel.h"


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

  Car(CarType, CarColor, Engine, Wheel);
  Car(Car const*);
  Car* clone() const override;
  ~Car();
  std::string toString() const;

private:
  const CarType type;
  const CarColor color;
  const Engine engine;
  const Wheel wheel;
};
