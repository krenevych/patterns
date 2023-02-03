#pragma once
#include <vector>

#include "manager.hpp"
#include "salesperson.hpp"


class SalesTeam
{
public:
  SalesTeam();
  void addManager(Manager*);
  void addSalesperson(Salesperson*);
  void payExpenses(int);

private:
  std::vector<Manager*> managers;
  std::vector<Salesperson*> salespeople;
};
