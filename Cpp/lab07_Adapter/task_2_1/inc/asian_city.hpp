#pragma once
#include "city.hpp"


class AsianCity: public City
{
public:
  AsianCity(std::string const&, double);
  std::string const& getName() const;
  double getTemperature() const;
  std::string getTemperatureScale() const;
  bool getHasWeatherWarning() const;
  void setHasWeatherWarning(bool);

private:
  std::string const name;
  double const temperature;
  bool hasWeatherWarning;
};
