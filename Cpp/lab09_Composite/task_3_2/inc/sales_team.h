#pragma once

#include <vector>

#include "manager.h"
#include "salesperson.h"


class SalesTeam
{
public:
  SalesTeam();
  ~SalesTeam();
  void addManager(Manager*);
  void addSalesperson(Salesperson*);
  void payExpenses(int);

private:
  std::vector<Manager*> managers;
  std::vector<Salesperson*> salespeople;
};
