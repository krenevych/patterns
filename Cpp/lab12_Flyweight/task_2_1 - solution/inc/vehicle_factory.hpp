#pragma once
#include <map>
#include <string>

#include "vehicles.hpp"


class VehicleFactory
{
public:
  std::map<int, Vehicle*> vehicles;
  Vehicle* getVehicle(int);
};
