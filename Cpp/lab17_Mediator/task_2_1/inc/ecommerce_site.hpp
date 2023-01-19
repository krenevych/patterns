#pragma once
#include <string>
#include <map>


class Customer;

class Driver;

class ECommerceSite
{
public:
  ECommerceSite(Customer const&);
  ~ECommerceSite();
  bool checkInStock(std::string const&, int);
  void sell(std::string const&, int);

private:
  Customer* customer;
  Driver* driver;
  std::map<std::string, int> stock;
};
