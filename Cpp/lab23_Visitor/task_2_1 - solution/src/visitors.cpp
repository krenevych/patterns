#include <iostream>

#include "visitors.hpp"


//DiscountVisitor
DiscountVisitor::DiscountVisitor(float discountCoefficient)
: discountCoefficient(discountCoefficient) {}

void DiscountVisitor::visit(GroceryList* list)
{
  std::cout << "Discount has been applied to each grocery in list!" << std::endl;
}

void DiscountVisitor::visit(Bread* bread)
{
  double price = bread->getPrice();
  bread->setPrice(this->discountCoefficient * price);
}

void DiscountVisitor::visit(Milk* milk)
{
  double price = milk->getPrice();
  milk->setPrice(this->discountCoefficient * price);
}

void DiscountVisitor::visit(Coffee* coffee)
{
  double price = coffee->getPrice();
  coffee->setPrice(this->discountCoefficient * price);
}


//IncreasingPriceVisitor
IncreasingPriceVisitor::IncreasingPriceVisitor() {}

void IncreasingPriceVisitor::visit(GroceryList* list)
{
  std::cout << "Prices have been increased... :( " << std::endl;
}

void IncreasingPriceVisitor::visit(Bread* bread)
{
  bread->setPrice(1.2);
}

void IncreasingPriceVisitor::visit(Milk* milk)
{
  milk->setPrice(2.2);
}

void IncreasingPriceVisitor::visit(Coffee* coffee)
{
  coffee->setPrice(60);
}
