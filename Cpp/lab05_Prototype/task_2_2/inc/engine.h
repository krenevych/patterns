#pragma once

#include <string>

#include "cloneable.h"


class Engine: public Cloneable
{
public:
  enum class Fuel
  {
    Petrol,
    Diesel,
    Electric
  };

  Engine(int, int, Fuel, float);
  Engine(Engine const*);
  ~Engine();
  Engine* clone() const override;
  std::string toString() const;

private:
  const int power;
  const int torque;
  const Fuel fuel;
  const float volume;
};
