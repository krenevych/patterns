#include "weather_event.hpp"


WeatherEvent::WeatherEvent(std::string const& location, float temperature, float humidity, float pressure)
: location(location), temperature(temperature), humidity(humidity), pressure(pressure) {}

std::string const& WeatherEvent::getLocation() const
{
  return this->location;
}

float WeatherEvent::getTemperature() const
{
  return this->temperature;
}

float WeatherEvent::getHumidity() const
{
  return this->humidity;
}

float WeatherEvent::getPressure() const
{
  return this->pressure;
}
