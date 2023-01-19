#include "customer.hpp"
#include "ecommerce_site.hpp"


Customer::Customer(std::string const& address)
: address(address)
{
  this->site = new ECommerceSite(*this);
}

Customer::Customer(Customer const& customer)
: address(customer.address), site(site) {}

Customer::~Customer()
{
  delete this->site;
}

std::string const& Customer::getAddress() const
{
  return this->address;
}

void Customer::buy(std::string const& item, int quantity)
{
  if (this->site->checkInStock(item, quantity))
  {
    this->site->sell(item, quantity);
  }
}
