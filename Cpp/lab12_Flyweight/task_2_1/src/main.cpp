#include <iostream>
#include <random>
#include <thread>
#include <chrono>

#include "vehicles.hpp"


int main()
{
  using namespace std;

  default_random_engine generator;
  bernoulli_distribution bernoulli_distr(0.5);
  uniform_int_distribution<int> uniform_int_distr(0, 1000);

  Vehicle * vehicle;
  int randInt;

  for (size_t ind = 0; ind != 12; ++ind)
  {
    randInt = bernoulli_distr(generator);
    if (randInt)
    {
      vehicle = new Car();
    }
    else
    {
      vehicle = new Truck();
    }

    cout << "Creating " << vehicle
         << ", type: " << vehicle->getType()
         << ", task: " << vehicle->runTask(uniform_int_distr(generator), uniform_int_distr(generator))
         << endl;

    this_thread::sleep_for(2s);
  }

  return 0;
}
