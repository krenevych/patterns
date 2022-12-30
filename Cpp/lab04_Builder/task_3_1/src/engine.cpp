#include "engine.h"


Engine::Engine(int power, int torque, Engine::Fuel fuel, float volume)
: power(power), torque(torque), fuel(fuel), volume(volume) {}

Engine::~Engine() {}

std::string Engine::toString() const
{
  std::string result = "Engine{power=" + std::to_string(this->power) +
  ", torque=" + std::to_string(this->torque) +
  ", fuel=";

  switch (this->fuel)
  {
    case Engine::Fuel::Petrol:
      result += "Petrol";
      break;
    case Engine::Fuel::Diesel:
      result += "Diesel";
      break;
    case Engine::Fuel::Electric:
      result += "Electric";
      break;
  }

  result += ", volume=" + std::to_string(this->volume) + '}';

  return result;
}
