#pragma once

#include "city.h"


class WeatherWarnings
{
public:
  double MAX_TEMPERATURE = 100;
  double MIN_TEMPERATURE = 16;
  WeatherWarnings();
  ~WeatherWarnings();
  void postWarning(City& city) const;
};
