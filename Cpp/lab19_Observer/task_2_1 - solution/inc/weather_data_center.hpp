#pragma once
#include <vector>

#include "subscribers.hpp"
#include "weather_reader.hpp"


class WeatherDataCenter
{
private:
  WeatherReader* weatherReader;
  std::vector<Subscriber*> subscribers;

public:
  WeatherDataCenter();
  ~WeatherDataCenter();
  void subscribe(Subscriber*);
  void unsubscribe(Subscriber*);
  void notifySubscribers(WeatherEvent*);
  bool update();
};
