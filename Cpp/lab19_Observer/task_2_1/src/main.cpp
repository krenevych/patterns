#include <iostream>

#include "weather_data_center.hpp"


int main()
{
  using namespace std;

  WeatherDataCenter dataCenter{};

  while(!dataCenter.update());

  cout << "Finish of the simulation." << endl;

  return 0;
}
