#include "asian_city.hpp"


AsianCity::AsianCity(std::string const& name, double temperature)
: name(name), temperature(temperature), hasWeatherWarning(false) {}

std::string const& AsianCity::getName() const
{
  return this->name;
}

double AsianCity::getTemperature() const
{
  return this->temperature;
}

std::string AsianCity::getTemperatureScale() const
{
  return "Celsius";
}

bool AsianCity::getHasWeatherWarning() const
{
  return this->hasWeatherWarning;
}

void AsianCity::setHasWeatherWarning(bool hasWeatherWarning)
{
  this->hasWeatherWarning = hasWeatherWarning;
}
