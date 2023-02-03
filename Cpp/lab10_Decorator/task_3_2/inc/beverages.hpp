#pragma once
#include <string>
#include <iostream>


class Beverage
{
public:
  virtual std::string description() const = 0;
  virtual float cost() const = 0;

  friend std::ostream& operator<<(std::ostream&, Beverage const&);
};


class DarkRoast: public Beverage
{
public:
  DarkRoast();
  std::string description() const;
  float cost() const;
};


class Decaf: public Beverage
{
public:
  Decaf();
  std::string description() const;
  float cost() const;
};


class Espresso: public Beverage
{
public:
  Espresso();
  std::string description() const;
  float cost() const;
};
