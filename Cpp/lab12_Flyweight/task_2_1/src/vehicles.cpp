#include "vehicles.hpp"


//Car
Car::Car() {}

std::string Car::getType() const
{
  return "Car";
}

std::string Car::runTask(int latitude, int longitude)
{
  return "Transportation of passengers to the destination: (" + std::to_string(latitude) + ", " + std::to_string(longitude) + ")";
}


//Truck
Truck::Truck() {}

std::string Truck::getType() const
{
  return "Truck";
}

std::string Truck::runTask(int latitude, int longitude)
{
  return "Transportation of goods to the destination: (" + std::to_string(latitude) + ", " + std::to_string(longitude) + ")";
}
