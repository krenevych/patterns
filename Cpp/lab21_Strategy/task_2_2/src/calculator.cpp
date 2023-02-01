#include <iostream>

#include "calculator.hpp"


int Calculator::add(int a, int b)
{
  int res = a + b;
  std::cout << a << " + " << b << " = " << res << std::endl;
  return res;
}

int Calculator::subtract(int a, int b)
{
  int res = a - b;
  std::cout << a << " - " << b << " = " << res << std::endl;
  return res;
}

int Calculator::multiply(int a, int b)
{
  int res = a * b;
  std::cout << a << " * " << b << " = " << res << std::endl;
  return res;
}
