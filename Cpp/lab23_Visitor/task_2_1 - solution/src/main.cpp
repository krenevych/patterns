#include <iostream>

#include "groceries.hpp"
#include "visitors.hpp"


int main()
{
  using namespace std;

  GroceryList groceryList;

  Groceries* bread1 = new Bread();
  Groceries* bread2 = new Bread();
  Groceries* milk1 = new Milk();

  groceryList.add(bread1);
  groceryList.add(bread2);
  groceryList.add(milk1);

  Groceries* coffee1 = new Coffee();
  groceryList.add(coffee1);

  cout << "Total price of grocery list: " << groceryList.getPrice() << endl;

  groceryList.accept(new DiscountVisitor(0.8f));
  cout << "Total price of grocery list: " << groceryList.getPrice() << endl
       << coffee1->getPrice() << endl;

  groceryList.accept(new IncreasingPriceVisitor());
  cout << "Total price of grocery list: " << groceryList.getPrice() << endl
       << coffee1->getPrice() << endl;

  return 0;
}
