#pragma once
#include "beverage.hpp"


class Tea: public Beverage
{
public:
  Tea(int);
  virtual void prepare();
  virtual int cost() const;
};


class BlackTea: public Tea
{
public:
  BlackTea(int, int);
  void prepare() override;
  int cost() const override;
  void drink();

private:
  int const waterVolume;
};


class TeaWithMilk: public Tea
{
public:
  TeaWithMilk(int, int);
  void prepare() override;
  int cost() const override;
  void drink();

private:
  int const milkVolume;
};
