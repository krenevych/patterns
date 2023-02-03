#pragma once
#include <string>

#include "vehicles.hpp"


class VehicleCalculator
{
public:
  virtual void setVehicle(Vehicle const*) = 0;
  virtual std::string calculatePrice() const = 0;
};


class CarCalculator: public VehicleCalculator
{
public:
  static int averageCarPrice;

  CarCalculator();
  int getRetailPrice() const;
  void setVehicle(Vehicle const*);
  std::string calculatePrice() const;

private:
  Vehicle const* vehicle = nullptr;
};


class TruckCalculator: public VehicleCalculator
{
public:
	static int averagePrice;

	TruckCalculator();
	void setVehicle(Vehicle const*);
	std::string calculatePrice() const;

private:
  Vehicle const* vehicle = nullptr;
};
