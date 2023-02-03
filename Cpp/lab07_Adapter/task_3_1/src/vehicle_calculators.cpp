#include <cassert>
#include <cmath>

#include "vehicle_calculators.hpp"


//CarCalculator
int CarCalculator::averageCarPrice = 6000;

CarCalculator::CarCalculator() {}

int CarCalculator::getRetailPrice() const
{
  assert(this->vehicle != nullptr);

	std::string model = this->vehicle->getModel();
	if (model == "Ford")
	{
		return 3000;
	}
	else if (model == "Audi")
	{
		return 5000;
	}
	else if (model == "BMW")
	{
		return 7000;
	}
	else if (model == "Tesla")
	{
		return 10000;
	}
	else
	{
		return averageCarPrice;
	}
}

void CarCalculator::setVehicle(Vehicle const * vehicle)
{
	this->vehicle = vehicle;
}

std::string CarCalculator::calculatePrice() const
{
  assert(this->vehicle != nullptr);
	double price = this->vehicle->getDamage() * std::max(this->getRetailPrice() - (this->vehicle->getAge() * 100), 0);
	return std::to_string(price) + "USD";
}


//TruckCalculator
int TruckCalculator::averagePrice = 10000;

TruckCalculator::TruckCalculator() {}

void TruckCalculator::setVehicle(Vehicle const* vehicle)
{
    this->vehicle = vehicle;
}

std::string TruckCalculator::calculatePrice() const
{
  assert(this->vehicle != nullptr);
	double price = std::max(-this->averagePrice + this->vehicle->getAge() * 100 + this->vehicle->getMileage() / 100, 0);
	return std::to_string(price) + "USD";
}
