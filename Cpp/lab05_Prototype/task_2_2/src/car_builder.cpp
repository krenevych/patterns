#include "car_builder.hpp"


CarBuilder* CarBuilder::reset()
{
  this->carType = Car::CarType::Sedan;
  this->carColor = Car::CarColor::White;

  if (this->engine != nullptr)
    delete this->engine;
  this->engine = new Engine(105, 140, Engine::Fuel::Petrol, 1.4);

  if (this->wheel != nullptr)
    delete this->wheel;
  this->wheel = new Wheel(Wheel::Material::Steel, 14);

  return this;
}

CarBuilder::CarBuilder()
{
  this->reset();
}

CarBuilder::~CarBuilder()
{
  if (this->engine != nullptr)
    delete this->engine;
  if (this->wheel != nullptr)
    delete this->wheel;
}

Car* CarBuilder::build()
{
  return new Car(this->carType, this->carColor,
    *(this->engine), *(this->wheel));
}

CarBuilder* CarBuilder::setType(Car::CarType carType)
{
  this->carType = carType;
  return this;
}

CarBuilder* CarBuilder::setCarColor(Car::CarColor carColor)
{
  this->carColor = carColor;
  return this;
}

CarBuilder* CarBuilder::setEngine(Engine* engine)
{
  delete this->engine;
  this->engine = engine;
  return this;
}

CarBuilder* CarBuilder::setWheel(Wheel* wheel)
{
  delete this->wheel;
  this->wheel = wheel;
  return this;
}
