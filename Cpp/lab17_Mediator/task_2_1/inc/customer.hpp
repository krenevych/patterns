#pragma once
#include <string>


class ECommerceSite;

class Customer
{
public:
  Customer(std::string const&);
  Customer(Customer const&);
  ~Customer();
  std::string const& getAddress() const;
  void buy(std::string const&, int);

private:
  std::string const address;
  ECommerceSite* site;
};
