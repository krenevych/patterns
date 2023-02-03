#pragma once
#include <string>


class Vehicle
{
public:
  virtual std::string getType() const = 0;
  virtual std::string runTask(int, int) = 0;
};


class Car: public Vehicle
{
public:
  Car();
  std::string getType() const;
  std::string runTask(int, int);
};


class Truck: public Vehicle
{
public:
  Truck();
  std::string getType() const;
  std::string runTask(int, int);
};
