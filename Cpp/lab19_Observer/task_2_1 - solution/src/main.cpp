#include <iostream>

#include "weather_data_center.hpp"
#include "subscribers.hpp"


int main()
{
  using namespace std;

  WeatherDataCenter dataCenter{};

  TemperatureSubscriber temperatureSubscriber;
  HumiditySubscriber humiditySubscriber;
  PressureSubscriber pressureSubscriber;

  dataCenter.subscribe(&temperatureSubscriber);
  dataCenter.subscribe(&humiditySubscriber);
  dataCenter.subscribe(&pressureSubscriber);

  while(!dataCenter.update());

  cout << "Finish of the simulation." << endl;

  return 0;
}
