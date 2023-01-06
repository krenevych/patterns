#pragma once

#include "pizzas.h"

#include <string>


class Toppings: public Pizza
{
public:
  Toppings(Pizza const*);
  virtual ~Toppings();

protected:
  Pizza const* pizza;
};


class Cheese: public Toppings
{
public:
  Cheese(Pizza const*);
  ~Cheese();
  std::string description() const;
  float cost() const;
};


class Olives: public Toppings
{
public:
  Olives(Pizza const*);
  ~Olives();
  std::string description() const;
  float cost() const;
};


class Peppers: public Toppings
{
public:
  Peppers(Pizza const*);
  ~Peppers();
  std::string description() const;
  float cost() const;
};
