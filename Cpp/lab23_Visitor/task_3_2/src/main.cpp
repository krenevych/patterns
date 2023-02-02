#include <iostream>

#include "military.hpp"


int main()
{
  using namespace std;

  GeneralStaff generalStaff("Пентагон", 20, 100);
  cout << generalStaff << endl;

  MilitaryBase militaryBase("Перл Харбор", 10, 1000, 300, 20);
  cout << militaryBase << endl;

  return 0;
}
