#include <iostream>

#include "weather_warnings.hpp"


WeatherWarnings::WeatherWarnings() {}

void WeatherWarnings::postWarning(City& city) const
{
  if (city.getTemperature() >= WeatherWarnings::MAX_TEMPERATURE || city.getTemperature() <= WeatherWarnings::MIN_TEMPERATURE)
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
