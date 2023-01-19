#pragma once
#include <string>


class Customer;

class Driver
{
public:
  Driver();
  void deliver(std::string const&, int, Customer const&);
};
