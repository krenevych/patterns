#include <iostream>

#include "sales_team.hpp"


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
  Manager jane{"Jane"};
  Salesperson bob{"Bob", &jane};
  Salesperson sue{"Sue", &jane};

  SalesTeam team;
  team.addManager(&jane);
  team.addSalesperson(&bob);
  team.addSalesperson(&sue);

  payManager(jane, 100);
  paySalesperson(bob, 300);
  payTeam(team, 200);

  return 0;
}
