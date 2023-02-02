#pragma once
#include <vector>


class Employee
{
public:
  virtual int getSalary() = 0;
};


class StaffList: public Employee
{
private:
  std::vector<Employee*> salaries;

public:
  StaffList();
  void addEmployee(Employee*);
  int getSalary();
};


class Manager: public Employee
{
private:
  int salary;

public:
  Manager(int);
  void setSalary(int);
  int getSalary();
};


class SalesPerson: public Employee
{
private:
  int salary;

public:
  SalesPerson(int);
  void setSalary(int);
  int getSalary();
};
