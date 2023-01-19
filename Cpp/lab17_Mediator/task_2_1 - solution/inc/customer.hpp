#pragma once
#include <string>


class Customer
{
public:
  Customer(std::string const&);
  Customer(Customer const&);
  std::string const& getAddress() const;

private:
  std::string const address;
};
