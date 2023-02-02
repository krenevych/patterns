#include <iostream>

#include "groceries.hpp"


int main()
{
  GroceryList groceryList;

  Groceries* bread1 = new Bread();
  Groceries* bread2 = new Bread();
  Groceries* milk1 = new Milk();

  groceryList.add(bread1);
  groceryList.add(bread2);
  groceryList.add(milk1);

  std::cout << "Total price of grocery list: " << groceryList.getPrice() << std::endl;

  return 0;
}
