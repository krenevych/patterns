#include "sales_team.h"


SalesTeam::SalesTeam() {}

SalesTeam::~SalesTeam() {}

void SalesTeam::addManager(Manager* manager)
{
  this->managers.push_back(manager);
}

void SalesTeam::addSalesperson(Salesperson* salesperson)
{
  this->salespeople.push_back(salesperson);
}

void SalesTeam::payExpenses(int amount)
{
  for (auto & manager: this->managers)
  {
    manager->payExpenses(amount);
  }
  for (auto & salesperson : this->salespeople)
  {
    salesperson->payExpenses(amount);
  }
}
