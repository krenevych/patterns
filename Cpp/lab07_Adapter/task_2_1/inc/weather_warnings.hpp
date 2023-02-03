#pragma once
#include "city.hpp"


class WeatherWarnings
{
public:
  inline static double MAX_TEMPERATURE = 100;
  inline static double MIN_TEMPERATURE = 16;
  WeatherWarnings();
  void postWarning(City& city) const;
};
