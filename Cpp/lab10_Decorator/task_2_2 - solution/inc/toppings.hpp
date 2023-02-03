#pragma once
#include <string>

#include "pizzas.hpp"


class Toppings: public Pizza
{
public:
  Toppings(Pizza const*);

protected:
  Pizza const* pizza;
};


class Cheese: public Toppings
{
public:
  Cheese(Pizza const*);
  std::string description() const;
  float cost() const;
};


class Olives: public Toppings
{
public:
  Olives(Pizza const*);
  std::string description() const;
  float cost() const;
};


class Peppers: public Toppings
{
public:
  Peppers(Pizza const*);
  std::string description() const;
  float cost() const;
};
