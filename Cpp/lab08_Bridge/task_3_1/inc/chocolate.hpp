#pragma once
#include "beverage.hpp"


class Chocolate: public Beverage
{
public:
  Chocolate(int);
  virtual void prepare();
  virtual int cost() const;
};


class BlackChocolate: public Chocolate
{
public:
  BlackChocolate(int, int);
  void prepare() override;
  int cost() const override;
  void drink();

private:
  int const waterVolume;
};


class MilkChocolate: public Chocolate
{
public:
  MilkChocolate(int, int);
  void prepare() override;
  int cost() const override;
  void drink();

private:
  int const milkVolume;
};
