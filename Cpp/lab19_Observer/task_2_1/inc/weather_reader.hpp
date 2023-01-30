#pragma once
#include <queue>
#include <mutex>
#include <string>

#include "weather_event.hpp"


class WeatherReader
{
private:
  std::queue<WeatherEvent*> eventQueue;
  std::mutex mtx;
  std::string const filePath;

public:
  WeatherReader(std::string&);
  ~WeatherReader();
  void read();
  WeatherEvent* getEvent();
};
