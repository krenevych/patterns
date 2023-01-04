#pragma once

#include "beverage.h"


class Tea: public Beverage
{
public:
  Tea(int);
  ~Tea();
  virtual void prepare();
  virtual int cost();
};


class BlackTea: public Tea
{
public:
  BlackTea(int, int);
  ~BlackTea();
  void prepare() override;
  int cost() override;
  void drink();

private:
  int const waterVolume;
};


class TeaWithMilk: public Tea
{
public:
  TeaWithMilk(int, int);
  ~TeaWithMilk();
  void prepare() override;
  int cost() override;
  void drink();

private:
  int const milkVolume;
};
