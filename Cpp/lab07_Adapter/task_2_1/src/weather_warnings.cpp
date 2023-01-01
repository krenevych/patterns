#include "weather_warnings.h"

#include <iostream>


WeatherWarnings::WeatherWarnings() {}

WeatherWarnings::~WeatherWarnings() {}

void WeatherWarnings::postWarning(City& city) const
{
  if (city.getTemperature() >= this->MAX_TEMPERATURE || city.getTemperature() <= this->MIN_TEMPERATURE)
  {
    std::cout << "Warning! Current temperature in " << city.getName() << " is " << city.getTemperature()
    << " " << city.getTemperatureScale() << std::endl;

    city.setHasWeatherWarning(true);
  }
  else
  {
    std::cout << "Temperature in " << city.getName() << " is OK." << std::endl;
  }
}
