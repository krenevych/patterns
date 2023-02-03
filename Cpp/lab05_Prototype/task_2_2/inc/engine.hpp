#pragma once
#include <string>
#include <iostream>

#include "cloneable.hpp"


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
  Engine(Engine const&);
  Engine* clone() const;

  friend std::ostream& operator<<(std::ostream&, Engine const&);

private:
  int const power;
  int const torque;
  Fuel const fuel;
  float const volume;
};
