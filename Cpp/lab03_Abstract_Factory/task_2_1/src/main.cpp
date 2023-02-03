#include <iostream>
#include <vector>

#include "scoda_transport.hpp"
#include "volvo_transport.hpp"
#include "transport_factories.hpp"


int main()
{
  using namespace std;

  vector<Bus*> buses;
  vector<Tram*> trams;
  vector<Trolleybus*> trolleybuses;

  TransportFactory* transportFactory = new ScodaFactory(); // = Одна з фабрик
  //TransportFactory* transportFactory = new VolvoFactory(); // = Одна з фабрик

  int const A = 10;
  int const T = 5;
  int const Tr = 40;
  //int const N = 100'000;
  int const N = 200'000;  // орієнтований пробіг експлуатації

  for (int i = 0; i != A; i++)
  {
      Bus* bus = transportFactory->createBus();
      buses.push_back(bus);
  }

  for (int i = 0; i != T; i++)
  {
      Tram* tram = transportFactory->createTram();
      trams.push_back(tram);
  }

  for (int i = 0; i != Tr; i++)
  {
      Trolleybus* trolley = transportFactory->createTrolley();
      trolleybuses.push_back(trolley);
  }

  int finalCostContract = 0;
  for (auto& bus : buses)
  {
      finalCostContract += bus->getCost() + bus->getUsageCost() * N;
  }

  for (auto& tram : trams)
  {
      finalCostContract += tram->getCost() + tram->getUsageCost() * N;
  }

  for (auto& trolleybus : trolleybuses)
  {
      finalCostContract += trolleybus->getCost() + trolleybus->getUsageCost() * N;
  }

  cout << "Final cost contract: " << finalCostContract << endl;
  //        100k
  // 443'000'000 Skoda
  // 465'500'000 Volvo

  // 200k
  //  Skoda 524'000'000
  //  Volvo 541'000'000

  return 0;
}
