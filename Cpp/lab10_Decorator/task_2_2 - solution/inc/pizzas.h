#pragma once

#include <string>


class Pizza
{
public:
  Pizza();
  virtual ~Pizza();
  virtual std::string description() const = 0;
  virtual float cost() const = 0;
  std::string toString() const;
};


class ThickCrustPizza: public Pizza
{
public:
  ThickCrustPizza();
  ~ThickCrustPizza();
  std::string description() const;
  float cost() const;
};


class ThinCrustPizza: public Pizza
{
public:
  ThinCrustPizza();
  ~ThinCrustPizza();
  std::string description() const;
  float cost() const;
};
