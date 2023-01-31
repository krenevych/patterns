#include <iostream>

#include "weather_data_center.hpp"


std::string path = "resources/input01.txt";

WeatherDataCenter::WeatherDataCenter()
: weatherReader(new WeatherReader(path))
{}

WeatherDataCenter::~WeatherDataCenter()
{
  delete weatherReader;
}

bool WeatherDataCenter::update()
{
  WeatherEvent* weatherEvent = this->weatherReader->getEvent();

  if (weatherEvent == nullptr)
  {
    return false;
  }

  if (weatherEvent->getLocation() == "end")
  {
    delete weatherEvent;
    return true;
  }

  std::cout << "Update data: city: " << weatherEvent->getLocation()
            << ", temperature = " << weatherEvent->getTemperature()
            << ", humidity = " << weatherEvent->getHumidity()
            << ", pressure = " << weatherEvent->getPressure()
            << std::endl;

  delete weatherEvent;
  return false;
}
