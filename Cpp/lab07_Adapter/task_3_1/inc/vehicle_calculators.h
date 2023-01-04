#pragma once

#include <string>

#include "vehicles.h"


class VehicleCalculator
{
public:
  virtual void setVehicle(Vehicle const*) = 0;
  virtual std::string calculatePrice() = 0;
};


class CarCalculator: public VehicleCalculator
{
public:
  static int averageCarPrice;

  CarCalculator();
  ~CarCalculator();
  int getRetailPrice();
  void setVehicle(Vehicle const*);
  std::string calculatePrice();

private:
  Vehicle const* vehicle = nullptr;
};


class TruckCalculator: public VehicleCalculator
{
public:
	static int averagePrice;

	TruckCalculator();
  ~TruckCalculator();
	void setVehicle(Vehicle const*);
	std::string calculatePrice();

private:
  Vehicle const* vehicle = nullptr;
};
