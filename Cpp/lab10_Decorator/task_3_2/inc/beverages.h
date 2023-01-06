#pragma once

#include <string>


class Beverage
{
public:
  virtual std::string description() const = 0;
  virtual float cost() const = 0;
  std::string toString() const;
};


class DarkRoast: public Beverage
{
public:
  DarkRoast();
  ~DarkRoast();
  std::string description() const;
  float cost() const;
};


class Decaf: public Beverage
{
public:
  Decaf();
  ~Decaf();
  std::string description() const;
  float cost() const;
};


class Espresso: public Beverage
{
public:
  Espresso();
  ~Espresso();
  std::string description() const;
  float cost() const;
};
