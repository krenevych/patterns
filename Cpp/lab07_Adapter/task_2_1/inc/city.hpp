#pragma once
#include <string>


class City
{
public:
  virtual std::string const& getName() const = 0;
  virtual double getTemperature() const = 0;
  virtual std::string getTemperatureScale() const = 0;
  virtual bool getHasWeatherWarning() const = 0;
  virtual void setHasWeatherWarning(bool) = 0;
};
