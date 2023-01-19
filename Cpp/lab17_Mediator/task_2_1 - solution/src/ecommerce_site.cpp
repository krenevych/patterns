#include "ecommerce_site.hpp"


ECommerceSite::ECommerceSite()
{
  this->stock.insert({"pens", 100});
  this->stock.insert({"pencils", 50});
  this->stock.insert({"erasers", 75});
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
}
