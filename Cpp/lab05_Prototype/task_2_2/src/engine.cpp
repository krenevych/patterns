#include "engine.hpp"


Engine::Engine(int power, int torque, Engine::Fuel fuel, float volume)
: power(power), torque(torque), fuel(fuel), volume(volume) {}

Engine::Engine(Engine const& other)
: power(other.power), torque(other.torque),
fuel(other.fuel), volume(other.volume) {}

Engine* Engine::clone() const
{
  return new Engine(*this);
}

std::ostream& operator<<(std::ostream& os, Engine const& engine)
{
  os << "Engine{power=" << engine.power
     << ", torque=" << engine.torque
     << ", fuel=";

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

  os << ", volume=" << engine.volume << "}";

  return os;
}
