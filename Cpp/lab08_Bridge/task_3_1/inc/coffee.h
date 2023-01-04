#pragma once

#include "beverage.h"


class Coffee: public Beverage
{
public:
  Coffee(int);
  ~Coffee();
  virtual void prepare();
  virtual int cost();
};


class BlackCoffee: public Coffee
{
public:
  BlackCoffee(int, int, bool);
  ~BlackCoffee();
  void prepare() override;
  int cost() override;
  void drink();

private:
  bool const extraCoffee;
  int const waterVolume;
};


class CoffeeWithMilk: public Coffee
{
public:
  CoffeeWithMilk(int, int);
  ~CoffeeWithMilk();
  void prepare() override;
  int cost() override;
  void drink();

private:
  int const milkVolume;
};
