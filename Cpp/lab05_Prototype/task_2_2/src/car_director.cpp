#include "car_director.hpp"


CarDirector::CarDirector() {}

void CarDirector::setCarBuilder(CarBuilder* carBuilder)
{
  this->carBuilder = carBuilder;
}

Car* CarDirector::makeDefaultCar()
{
  return this->carBuilder
             ->reset()
             ->build();
}

Car* CarDirector::makeSportCar()
{
  return this->carBuilder
             ->reset()
             ->setCarColor(Car::CarColor::Red)
             ->setEngine(new Engine(450, 605, Engine::Fuel::Diesel, 3.5))
             ->setWheel(new Wheel(Wheel::Material::Alloy, 21))
             ->build();
}
Car* CarDirector::makeSUV()
{
  return this->carBuilder
             ->reset()
             ->setType(Car::CarType::SUV)
             ->setEngine(new Engine(198, 420, Engine::Fuel::Diesel, 2.2))
             ->setWheel(new Wheel(Wheel::Material::Forged, 19))
             ->setCarColor(Car::CarColor::Black)
             ->build();
}
