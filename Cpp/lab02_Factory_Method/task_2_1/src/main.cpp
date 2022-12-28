#include "cars.h"
#include "car_factories.h"


#include<vector>

typedef std::vector<Car*> AutoPark;


int main()
{
  AutoPark auto_park;

  AudiFactory audi_fact;
  FordFactory ford_fact;
  MazdaFactory mazda_fact;
  ToyotaFactory toyota_fact;
  VWFactory vw_fact;


  auto_park.push_back(audi_fact.create());
  auto_park.push_back(audi_fact.create());

  auto_park.push_back(ford_fact.create());

  auto_park.push_back(mazda_fact.create());
  auto_park.push_back(mazda_fact.create());
  auto_park.push_back(mazda_fact.create());

  auto_park.push_back(toyota_fact.create());
  auto_park.push_back(toyota_fact.create());

  auto_park.push_back(vw_fact.create());
  auto_park.push_back(vw_fact.create());

  for (auto car : auto_park)
  {
    car->run();
  }

  return 0;
}
