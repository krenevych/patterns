#pragma once
#include <string>
#include <iostream>


class Pizza
{
public:
  Pizza();
  virtual std::string description() const = 0;
  virtual float cost() const = 0;

  friend std::ostream& operator<<(std::ostream&, Pizza const&);
};


class ThickCrustPizza: public Pizza
{
public:
  ThickCrustPizza();
  std::string description() const;
  float cost() const;
};


class ThinCrustPizza: public Pizza
{
public:
  ThinCrustPizza();
  std::string description() const;
  float cost() const;
};
