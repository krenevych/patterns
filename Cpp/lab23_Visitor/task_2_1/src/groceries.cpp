#include "groceries.hpp"


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
