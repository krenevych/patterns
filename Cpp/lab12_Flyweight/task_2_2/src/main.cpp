#include <iostream>
#include <array>
#include <vector>
#include <random>
#include <thread>
#include <chrono>

#include "car_builder.hpp"


int main()
{
  using namespace std;

  CarBuilder* carBuilder = new CarBuilder();
  Car* car;

  vector<Car*> vehicles;

  Engine* engine;
  Wheel* wheel;
  array<Car::CarType, 3> carTypes {
    Car::CarType::Sedan,
    Car::CarType::Hatchback,
    Car::CarType::SUV
  };
  array<Car::CarColor, 4> carColors {
    Car::CarColor::White,
    Car::CarColor::Black,
    Car::CarColor::Red,
    Car::CarColor::Grey
  };
  array<Engine::Fuel, 3> fuels {
    Engine::Fuel::Petrol,
    Engine::Fuel::Diesel,
    Engine::Fuel::Electric
  };

  random_device dev;
  mt19937 generator(dev());
  uniform_int_distribution<int> car_type_distr(0, carTypes.size() - 1);
  uniform_int_distribution<int> car_color_distr(0, carColors.size() - 1);
  uniform_int_distribution<int> fuel_distr(0, fuels.size() - 1);
  uniform_int_distribution<int> wheel_diameter_distr(17, 20);
  uniform_int_distribution<int> power_distr(11, 15);


  for (int ind = 0; ind != 12; ++ind)
  {
    engine = new Engine(power_distr(generator) * 10, fuels[fuel_distr(generator)]);
    wheel = new Wheel(wheel_diameter_distr(generator));

    car = carBuilder
          ->reset()
          ->setType(carTypes[car_type_distr(generator)])
          ->setCarColor(carColors[car_color_distr(generator)])
          ->setEngine(engine)
          ->setWheel(wheel)
          ->build();

    cout << "Creating " << car << endl << *car << endl << endl;

    vehicles.push_back(car);

    this_thread::sleep_for(1s);
  }

  return 0;
}
