#pragma once
#include "customer.hpp"
#include "driver.hpp"
#include "ecommerce_site.hpp"


class Mediator
{
public:
  void setSite(ECommerceSite&);
  void setCustomer(Customer&);
  void setDriver(Driver&);
  void buy(std::string const&, int);

private:
  ECommerceSite* site;
  Customer* customer;
  Driver* driver;
};
