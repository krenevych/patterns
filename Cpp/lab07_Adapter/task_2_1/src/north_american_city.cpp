#include "north_american_city.hpp"


NorthAmericanCity::NorthAmericanCity(std::string const& name, double temperature)
: name(name), temperature(temperature), hasWeatherWarning(false) {}

std::string const& NorthAmericanCity::getName() const
{
  return this->name;
}

double NorthAmericanCity::getTemperature() const
{
  return this->temperature;
}

std::string NorthAmericanCity::getTemperatureScale() const
{
  return "Fahrenheit";
}

bool NorthAmericanCity::getHasWeatherWarning() const
{
  return this->hasWeatherWarning;
}

void NorthAmericanCity::setHasWeatherWarning(bool hasWeatherWarning)
{
  this->hasWeatherWarning = hasWeatherWarning;
}
