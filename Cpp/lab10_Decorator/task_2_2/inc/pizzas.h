#pragma once

#include <string>


class Pizza
{
public:
  Pizza();
  ~Pizza();
  virtual std::string description() = 0;
  virtual float cost() = 0;
  std::string toString();
};


class ThickCrustPizza: public Pizza
{
public:
  ThickCrustPizza();
  ~ThickCrustPizza();
  std::string description();
  float cost();
};


class ThinCrustPizza: public Pizza
{
public:
  ThinCrustPizza();
  ~ThinCrustPizza();
  std::string description();
  float cost();
};
