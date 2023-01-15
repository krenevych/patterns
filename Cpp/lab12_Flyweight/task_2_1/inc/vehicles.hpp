#pragma once

#include <string>


class Vehicle
{
public:
  virtual std::string getType() = 0;
  virtual std::string runTask(int, int) = 0;
};


class Car: public Vehicle
{
public:
  Car();
  ~Car();
  std::string getType();
  std::string runTask(int, int);
};


class Truck: public Vehicle
{
public:
  Truck();
  ~Truck();
  std::string getType();
  std::string runTask(int, int);
};
