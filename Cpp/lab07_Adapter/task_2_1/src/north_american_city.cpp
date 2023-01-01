#include "north_american_city.h"


NorthAmericanCity::NorthAmericanCity(std::string name, double temperature)
: name(name), temperature(temperature), hasWeatherWarning(false) {}

NorthAmericanCity::~NorthAmericanCity() {}

std::string NorthAmericanCity::getName() const
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
