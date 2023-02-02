#pragma once
#include "groceries.hpp"


class Visitor
{
public:
  virtual void visit(GroceryList*) = 0;
  virtual void visit(Bread*) = 0;
  virtual void visit(Milk*) = 0;
  virtual void visit(Coffee*) = 0;
};


class DiscountVisitor: public Visitor
{
private:
  float discountCoefficient = 1.0f;
  
public:
  DiscountVisitor(float);
  void visit(GroceryList*);
  void visit(Bread*);
  void visit(Milk*);
  void visit(Coffee*);
};


class IncreasingPriceVisitor: public Visitor
{
public:
  IncreasingPriceVisitor();
  void visit(GroceryList*);
  void visit(Bread*);
  void visit(Milk*);
  void visit(Coffee*);
};
