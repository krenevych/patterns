#include "groceries.hpp"
#include "visitors.hpp"


//GroceryList
GroceryList::GroceryList() {}

void GroceryList::add(Groceries* grocery)
{
  this->groceries.push_back(grocery);
}

double GroceryList::getPrice() const
{
  double s = 0.0;
  for (auto& grocery: this->groceries)
  {
    s += grocery->getPrice();
  }

  return s;
}

void GroceryList::accept(Visitor* visitor)
{
  visitor->visit(this);
  for (auto& grocery: this->groceries)
  {
    grocery->accept(visitor);
  }
}


//Bread
Bread::Bread() {}

void Bread::setPrice(double price)
{
  this->price = price;
}

double Bread::getPrice() const
{
  return this->price;
}

void Bread::accept(Visitor* visitor)
{
  visitor->visit(this);
}


//Milk
Milk::Milk() {}

void Milk::setPrice(double price)
{
  this->price = price;
}

double Milk::getPrice() const
{
  return this->price;
}

void Milk::accept(Visitor* visitor)
{
  visitor->visit(this);
}


//Coffee
Coffee::Coffee() {}

void Coffee::setPrice(double price)
{
  this->price = price;
}

double Coffee::getPrice() const
{
  return this->price;
}

void Coffee::accept(Visitor* visitor)
{
  visitor->visit(this);
}
