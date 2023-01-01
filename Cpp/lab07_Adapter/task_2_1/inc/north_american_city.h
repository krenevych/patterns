#pragma once

#include "city.h"


class NorthAmericanCity: public City
{
public:
  NorthAmericanCity(std::string, double);
  ~NorthAmericanCity();
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
