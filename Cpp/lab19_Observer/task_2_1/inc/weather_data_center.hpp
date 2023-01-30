#pragma once
#include "weather_reader.hpp"


class WeatherDataCenter
{
private:
  WeatherReader* weatherReader;

public:
  WeatherDataCenter();
  ~WeatherDataCenter();
  bool update();
};
