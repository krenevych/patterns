#include <iostream>
#include <algorithm>

#include "weather_data_center.hpp"


std::string path = "resources/input01.txt";

WeatherDataCenter::WeatherDataCenter()
: weatherReader(new WeatherReader(path))
{}

WeatherDataCenter::~WeatherDataCenter()
{
  delete weatherReader;
}

void WeatherDataCenter::subscribe(Subscriber* subscriber)
{
  this->subscribers.push_back(subscriber);
}

void WeatherDataCenter::unsubscribe(Subscriber* subscriber)
{
  std::remove(this->subscribers.begin(), this->subscribers.end(), subscriber);
}

void WeatherDataCenter::notifySubscribers(WeatherEvent* event)
{
  for (auto& subscriber : this->subscribers)
  {
    subscriber->update(this, event);
  }
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

  this->notifySubscribers(weatherEvent);

  delete weatherEvent;
  return false;
}
