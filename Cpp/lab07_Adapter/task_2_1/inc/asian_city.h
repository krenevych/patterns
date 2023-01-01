#pragma once

#include "city.h"


class AsianCity: public City
{
public:
  AsianCity(std::string, double);
  ~AsianCity();
  std::string getName() const;
  double getTemperature() const;
  std::string getTemperatureScale() const;
  bool getHasWeatherWarning() const;
  void setHasWeatherWarning(bool);

private:
  const std::string name;
  const double temperature;
  bool hasWeatherWarning;
};
