#include <iostream>
#include <vector>

#include "scoda_transport.h"
#include "volvo_transport.h"
#include "transport_factories.h"

template<class T>
using vector = std::vector<T>;


int main()
{
  vector<Bus*> buses;
  vector<Tram*> trams;
  vector<Trolleybus*> trolleybuses;

  TransportFactory* transportFactory = new ScodaFactory(); // = Одна з фабрик
  //TransportFactory* transportFactory = new VolvoFactory(); // = Одна з фабрик

  const int A = 10;
  const int T = 5;
  const int Tr = 40;
  //const int N = 100000;
  const int N = 200000;  // орієнтований пробіг експлуатації

  for (int i = 0; i != A; i++) {
      Bus* bus = transportFactory->createBus();
      buses.push_back(bus);
  }

  for (int i = 0; i != T; i++) {
      Tram* tram = transportFactory->createTram();
      trams.push_back(tram);
  }

  for (int i = 0; i != Tr; i++) {
      Trolleybus* trolley = transportFactory->createTrolley();
      trolleybuses.push_back(trolley);
  }

  int finalCostContract = 0;
  for (auto bus : buses)
  {
      finalCostContract += bus->getCost() + bus->getUsageCost() * N;
  }

  for (auto tram : trams)
  {
      finalCostContract += tram->getCost() + tram->getUsageCost() * N;
  }

  for (auto trolleybus : trolleybuses)
  {
      finalCostContract += trolleybus->getCost() + trolleybus->getUsageCost() * N;
  }

  std::cout << "Final cost contract: " << finalCostContract << std::endl;
  //        100k
  // 443_000_000 Skoda
  // 465_500_000 Volvo

  // 200k
  //  Skoda 524_000_000
  //  Volvo 541_000_000

  return 0;
}
