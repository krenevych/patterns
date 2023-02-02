#pragma once
#include <vector>


class Groceries
{
public:
  virtual double getPrice() const = 0;
};


class GroceryList: public Groceries
{
public:
  GroceryList();
  void add(Groceries*);
  double getPrice() const;

private:
  std::vector<Groceries*> groceries;
};


class Bread: public Groceries
{
public:
  Bread();
  void setPrice(double);
  double getPrice() const;

private:
  double price = 1;
};


class Milk: public Groceries
{
public:
  Milk();
  void setPrice(double);
  double getPrice() const;

private:
  double price = 2;
};
