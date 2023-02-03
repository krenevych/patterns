#include <iostream>

#include "driver.hpp"
#include "customer.hpp"


Driver::Driver() {}

void Driver::deliver(std::string const& item, int quantity, Customer const& customer)
{
  std::cout << quantity << " " << item << " out for delivery to " << customer.getAddress() << std::endl;
}
