#pragma once
#include <vector>


class Visitor;


class Groceries
{
public:
  virtual double getPrice() const = 0;
  virtual void accept(Visitor*) = 0;
};


class GroceryList: public Groceries
{
public:
  GroceryList();
  void add(Groceries*);
  double getPrice() const;
  void accept(Visitor*);

private:
  std::vector<Groceries*> groceries;
};


class Bread: public Groceries
{
public:
  Bread();
  void setPrice(double);
  double getPrice() const;
  void accept(Visitor*);

private:
  double price = 1;
};


class Milk: public Groceries
{
public:
  Milk();
  void setPrice(double);
  double getPrice() const;
  void accept(Visitor*);

private:
  double price = 2;
};


class Coffee: public Groceries
{
public:
  Coffee();
  void setPrice(double);
  double getPrice() const;
  void accept(Visitor*);

private:
  double price = 50;
};
