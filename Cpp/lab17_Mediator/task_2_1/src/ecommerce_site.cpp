#include "ecommerce_site.hpp"
#include "customer.hpp"
#include "driver.hpp"


ECommerceSite::ECommerceSite(Customer const& customer)
: customer(new Customer(customer)), driver(new Driver())
{
  this->stock.insert({"pens", 100});
  this->stock.insert({"pencils", 50});
  this->stock.insert({"erasers", 75});
}

ECommerceSite::~ECommerceSite()
{
  delete this->customer;
  delete this->driver;
}

bool ECommerceSite::checkInStock(std::string const& item, int quantity)
{
  auto search = this->stock.find(item);
  return search != this->stock.end() && (search->second > quantity);
}

void ECommerceSite::sell(std::string const& item, int quantity)
{
  int newQuantity = this->stock.at(item) - quantity;
  this->stock[item] = newQuantity;

  this->driver->deliver(item, quantity, *this->customer);
}
