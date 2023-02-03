#pragma once
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

  Engine(int, Fuel const&);

  friend std::ostream& operator<<(std::ostream&, Engine const&);

private:
  int const power;
  Fuel const fuel;
};
