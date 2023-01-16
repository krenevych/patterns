#include "engine.hpp"


Engine::Engine(int power, Engine::Fuel const& fuel)
: power(power), fuel(fuel) {}

Engine::~Engine() {}

std::ostream& operator<<(std::ostream& os, Engine const& engine)
{
  os << "Engine{power=" << engine.power << ", fuel=";

  switch (engine.fuel)
  {
    case Engine::Fuel::Petrol:
      os << "Petrol";
      break;
    case Engine::Fuel::Diesel:
      os << "Diesel";
      break;
    case Engine::Fuel::Electric:
      os << "Electric";
      break;
  }

  os << "}";

  return os;
}
