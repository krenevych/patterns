#pragma once
#include <string>


class WeatherEvent
{
public:
  WeatherEvent(std::string const&, float, float, float);
  std::string const& getLocation() const;
  float getTemperature() const;
  float getHumidity() const;
  float getPressure() const;

private:
  std::string const location;
  float const temperature;     // температура повітря
  float const humidity;        // вологість повітря
  float const pressure;        // атмосферний тиск
};
