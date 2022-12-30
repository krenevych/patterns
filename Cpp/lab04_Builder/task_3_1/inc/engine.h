#pragma once

#include <string>


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
  ~Engine();

  std::string toString() const;

private:
  const int power;
  const int torque;
  const Fuel fuel;
  const float volume;
};
