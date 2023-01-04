#pragma once


class Beverage
{
public:
  Beverage(int);
  ~Beverage();
  virtual void prepare() = 0;
  virtual int cost() = 0;
  virtual void drink() = 0;

protected:
  int const sugar;
};
