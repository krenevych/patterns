#pragma once
#include "beverage.hpp"


class Coffee: public Beverage
{
public:
  Coffee(int);
  virtual void prepare();
  virtual int cost() const;
};


class BlackCoffee: public Coffee
{
public:
  BlackCoffee(int, int, bool);
  void prepare() override;
  int cost() const override;
  void drink();

private:
  bool const extraCoffee;
  int const waterVolume;
};


class CoffeeWithMilk: public Coffee
{
public:
  CoffeeWithMilk(int, int);
  void prepare() override;
  int cost() const override;
  void drink();

private:
  int const milkVolume;
};
