#include <cassert>

#include "vehicles.hpp"


//Vehicle
Vehicle::Vehicle(int age, std::string const& model, float damage, int mileage)
: age(age), model(model), damage(damage), mileage(mileage)
{
  assert(this->age >= 0);
  assert(0.0f <= this->damage && this->damage <= 1.0f);
  assert(this->mileage >= 0);
}

int Vehicle::getAge() const
{
	return this->age;
}

std::string Vehicle::getModel() const
{
	return this->model;
}

float Vehicle::getDamage() const
{
	return this->damage;
}

int Vehicle::getMileage() const
{
	return this->mileage;
}


//Car
Car::Car(int age, std::string const& model, float damage)
: Vehicle(age, model, damage, 0) {}


//Truck
Truck::Truck(int age, int mileage)
: Vehicle(age, "truck", 0.0f, mileage) {}
