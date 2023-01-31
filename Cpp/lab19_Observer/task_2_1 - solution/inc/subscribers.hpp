#pragma once
#include "weather_event.hpp"


class WeatherDataCenter;


class Subscriber
{
public:
  virtual void update(WeatherDataCenter*, WeatherEvent*) = 0;
};


class TemperatureSubscriber: public Subscriber
{
public:
  void update(WeatherDataCenter*, WeatherEvent*);

private:
  static int const minTemp = -20;
  static int const maxTemp =  30;
};


class HumiditySubscriber: public Subscriber
{
public:
  void update(WeatherDataCenter*, WeatherEvent*);

private:
  static int const minHumidity = 30;
};


class PressureSubscriber: public Subscriber
{
public:
  void update(WeatherDataCenter*, WeatherEvent*);

private:
  static int const maxPressure = 780;
  static int const minPressure = 730;
};
