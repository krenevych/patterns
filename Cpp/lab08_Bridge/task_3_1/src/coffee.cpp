#include <iostream>

#include "coffee.hpp"


//Coffee
Coffee::Coffee(int sugar)
: Beverage(sugar) {}

void Coffee::prepare()
{
  std::cout << "Put some coffee..." << std::endl;
}

int Coffee::cost() const
{
  return 10;
}


//BlackCoffee
BlackCoffee::BlackCoffee(int sugar, int waterVolume, bool extraCoffee)
: Coffee(sugar), waterVolume(waterVolume), extraCoffee(extraCoffee) {}

void BlackCoffee::prepare()
{
  this->Coffee::prepare();
  if (this->extraCoffee)
  {
    std::cout << "Put extra coffee..." << std::endl;
  }
  std::cout << "Put some hot watter: " << this->waterVolume << " ml" << std::endl;
  if (this->sugar > 0)
  {
    std::cout << "Put some sugar     : " << this->sugar << " pieces" << std::endl;
  }
}

int BlackCoffee::cost() const
{
  return this->Coffee::cost();
}

void BlackCoffee::drink()
{
  std::cout << "Drink black coffee!" << std::endl;
}


//CoffeeWithMilk
CoffeeWithMilk::CoffeeWithMilk(int sugar, int milkVolume)
: Coffee(sugar), milkVolume(milkVolume) {}

void CoffeeWithMilk::prepare()
{
  this->Coffee::prepare();
  std::cout << "Put some milk: " << this->milkVolume << " ml" << std::endl;
  if (this->sugar > 0)
  {
    std::cout << "Put some sugar     : " << this->sugar << " pieces" << std::endl;
  }
}

int CoffeeWithMilk::cost() const
{
  return this->Coffee::cost() + static_cast<int>(milkVolume / 20.0);
}

void CoffeeWithMilk::drink()
{
  std::cout << "Drink coffee with milk!" << std::endl;
}
