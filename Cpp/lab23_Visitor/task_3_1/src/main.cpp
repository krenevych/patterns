#include <iostream>

#include "employees.hpp"


int main()
{
  using namespace std;

  StaffList staffList;

  staffList.addEmployee(new Manager(60000));
  staffList.addEmployee(new SalesPerson(50000));
  staffList.addEmployee(new SalesPerson(40000));

  cout << "Total amount paid to staff: " << staffList.getSalary() << endl;

  return 0;
}
