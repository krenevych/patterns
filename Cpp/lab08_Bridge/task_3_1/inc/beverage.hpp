#pragma once


class Beverage
{
public:
  Beverage(int);
  virtual void prepare() = 0;
  virtual int cost() const = 0;
  virtual void drink() = 0;

protected:
  int const sugar;
};
