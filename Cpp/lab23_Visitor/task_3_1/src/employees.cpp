#include "employees.hpp"


//StaffList
StaffList::StaffList() {}

void StaffList::addEmployee(Employee* employee)
{
  this->salaries.push_back(employee);
}

int StaffList::getSalary()
{
  int sum = 0;
  for (auto& salary : this->salaries)
  {
    sum += salary->getSalary();
  }

  return sum;
}


//Manager
Manager::Manager(int salary)
: salary(salary) {}

void Manager::setSalary(int salary)
{
  this->salary = salary;
}

int Manager::getSalary()
{
  return this->salary;
}


//SalesPerson
SalesPerson::SalesPerson(int salary)
: salary(salary) {}

void SalesPerson::setSalary(int salary)
{
  this->salary = salary;
}

int SalesPerson::getSalary()
{
  return this->salary;
}
