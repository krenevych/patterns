#include <thread>
#include <chrono>
#include <iostream>
#include <fstream>

#include "weather_reader.hpp"


void WeatherReader::read()
{
  std::string location;
  float temperature;
  float humidity;
  float pressure;

  WeatherEvent* event;

  try
  {
    std::ifstream reader(this->filePath, std::ios_base::in);
    while (reader >> location >> temperature >> humidity >> pressure)
    {
      event = new WeatherEvent(location, temperature, humidity, pressure);
      this->mtx.lock();
      this->eventQueue.push(event);
      this->mtx.unlock();

      std::this_thread::sleep_for(std::chrono::seconds(1));
    }
  }
  catch (std::string msg)
  {
    std::cerr << msg << std::endl;
  }

  event = new WeatherEvent("end", 0, 9, 0);
  this->mtx.lock();
  this->eventQueue.push(event);
  this->mtx.unlock();
}

WeatherReader::WeatherReader(std::string& filePath)
: filePath(filePath)
{
  std::thread thd(&WeatherReader::read, this);
  thd.detach();
}

WeatherReader::~WeatherReader()
{
  WeatherEvent* poll;

  while (!this->eventQueue.empty())
  {
    poll = this->eventQueue.front();
    this->eventQueue.pop();
    delete poll;
  }
}

WeatherEvent* WeatherReader::getEvent()
{
  WeatherEvent* poll(nullptr);

  this->mtx.lock();
  if (!this->eventQueue.empty())
  {
    poll = this->eventQueue.front();
    this->eventQueue.pop();
  }
  this->mtx.unlock();

  return poll;
}
