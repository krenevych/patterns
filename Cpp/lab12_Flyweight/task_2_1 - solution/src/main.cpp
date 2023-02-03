#include <iostream>
#include <random>
#include <thread>
#include <chrono>

#include "vehicles.hpp"
#include "vehicle_factory.hpp"


int main()
{
  using namespace std;

  random_device dev;
  mt19937 generator(dev());
  bernoulli_distribution bernoulli_distr(0.5);
  uniform_int_distribution<int> uniform_int_distr(0, 1000);

  VehicleFactory vehicleFactory;
  Vehicle * vehicle;
  int randInt;

  for (int ind = 0; ind != 12; ++ind)
  {
    randInt = bernoulli_distr(generator);
    vehicle = vehicleFactory.getVehicle(randInt);

    cout << "Creating " << vehicle
         << ", type: " << vehicle->getType()
         << ", task: " << vehicle->runTask(uniform_int_distr(generator), uniform_int_distr(generator))
         << endl;

    this_thread::sleep_for(2s);
  }

  return 0;
}
