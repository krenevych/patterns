#include "customer.hpp"


Customer::Customer(std::string const& address)
: address(address)
{}

Customer::Customer(Customer const& customer)
: address(customer.address) {}

std::string const& Customer::getAddress() const
{
  return this->address;
}
