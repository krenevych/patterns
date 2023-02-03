#pragma once
#include <string>
#include <iostream>


class Engine
{
public:
  enum class Fuel
  {
    Petrol,
    Diesel,
    Electric
  };

  Engine(int, int, Fuel, float);

  friend std::ostream& operator<<(std::ostream&, Engine const&);

private:
  int const power;
  int const torque;
  Fuel const fuel;
  float const volume;
};
