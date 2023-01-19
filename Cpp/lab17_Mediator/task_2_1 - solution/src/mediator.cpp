#include "mediator.hpp"


void Mediator::setSite(ECommerceSite& site)
{
  this->site = &site;
}

void Mediator::setCustomer(Customer& customer)
{
  this->customer = &customer;
}

void Mediator::setDriver(Driver& driver)
{
  this->driver = &driver;
}

void Mediator::buy(std::string const& item, int quantity)
{
  if (this->site->checkInStock(item, quantity))
  {
    this->site->sell(item, quantity);
    this->driver->deliver(item, quantity, *this->customer);
  }
}
