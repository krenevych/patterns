#include <iostream>

#include "sales_team.h"


void payManager(Manager& manager, int amount)
{
  std::cout << "Expenses have been requested" << std::endl;
  manager.payExpenses(amount);
  std::cout << "Expenses have been paid" << std::endl;
}

void paySalesperson(Salesperson& salesperson, int amount)
{
  std::cout << "Expenses have been requested" << std::endl;
  salesperson.payExpenses(amount);
  std::cout << "Expenses have been paid" << std::endl;
}

void payTeam(SalesTeam& team, int amount)
{
  std::cout << "Expenses have been requested" << std::endl;
  team.payExpenses(amount);
  std::cout << "Expenses have been paid" << std::endl;
}


int main()
{
  Manager jane = Manager("Jane");
  Salesperson bob = Salesperson("Bob", &jane);
  Salesperson sue = Salesperson("Sue", &jane);

  SalesTeam team = SalesTeam();
  team.addManager(&jane);
  team.addSalesperson(&bob);
  team.addSalesperson(&sue);

  payManager(jane, 100);
  paySalesperson(bob, 300);
  payTeam(team, 200);

  return 0;
}
