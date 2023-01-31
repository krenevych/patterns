#include <iostream>

#include "subscribers.hpp"


void TemperatureSubscriber::update(WeatherDataCenter* dataCenter, WeatherEvent* event)
{
  if (event->getTemperature() < TemperatureSubscriber::minTemp || event->getTemperature() > TemperatureSubscriber::maxTemp)
  {
    std::cout << "Температура в " << event->getLocation() << " виходить за допустимі межі" << std::endl;
  }
}

void HumiditySubscriber::update(WeatherDataCenter* dataCenter, WeatherEvent* event)
{
  if (event->getHumidity() < HumiditySubscriber::minHumidity)
  {
    std::cout << "Вологість у " << event->getLocation() << " нижче допустимої, візьміть з собою пляшку водички!" << std::endl;
  }
}

void PressureSubscriber::update(WeatherDataCenter* dataCenter, WeatherEvent* event)
{
  if (event->getPressure() > PressureSubscriber::maxPressure)
  {
    std::cout << "Атмосферний тиск у " << event->getLocation() << " вище норми, підготуйте спазмалгон!" << std::endl;
  }
  else if (event->getPressure() < PressureSubscriber::minPressure)
  {
    std::cout << "Атмосферний тиск у " << event->getLocation() << " нижче норми, можлива гроза!" << std::endl;
  }
}
