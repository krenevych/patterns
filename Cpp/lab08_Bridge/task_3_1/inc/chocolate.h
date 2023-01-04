#pragma once

#include "beverage.h"


class Chocolate: public Beverage
{
public:
  Chocolate(int);
  ~Chocolate();
  virtual void prepare();
  virtual int cost();
};


class BlackChocolate: public Chocolate
{
public:
  BlackChocolate(int, int);
  ~BlackChocolate();
  void prepare() override;
  int cost() override;
  void drink();

private:
  int const waterVolume;
};


class MilkChocolate: public Chocolate
{
public:
  MilkChocolate(int, int);
  ~MilkChocolate();
  void prepare() override;
  int cost() override;
  void drink();

private:
  int const milkVolume;
};
