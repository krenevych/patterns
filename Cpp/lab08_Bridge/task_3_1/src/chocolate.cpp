#include "chocolate.h"

#include <iostream>


//Chocolate
Chocolate::Chocolate(int sugar)
: Beverage(sugar) {}

Chocolate::~Chocolate() {}

void Chocolate::prepare()
{
  std::cout << "Put some cacao..." << std::endl;
}

int Chocolate::cost()
{
  return 15;
}


//BlackChocolate
BlackChocolate::BlackChocolate(int sugar, int waterVolume)
: Chocolate(sugar), waterVolume(waterVolume) {}

BlackChocolate::~BlackChocolate() {}

void BlackChocolate::prepare()
{
  this->Chocolate::prepare();
  std::cout << "Put some hot watter: " << this->waterVolume << " ml" << std::endl;
  if (this->sugar > 0)
  {
    std::cout << "Put some sugar     : " << this->sugar << " pieces" << std::endl;
  }
}

int BlackChocolate::cost()
{
  return this->Chocolate::cost();
}

void BlackChocolate::drink()
{
  std::cout << "Drink chocolate beverage!" << std::endl;
}


//MilkChocolate
MilkChocolate::MilkChocolate(int sugar, int milkVolume)
: Chocolate(sugar), milkVolume(milkVolume) {}

MilkChocolate::~MilkChocolate() {}

void MilkChocolate::prepare()
{
  this->Chocolate::prepare();
  std::cout << "Put some milk: " << this->milkVolume << " ml" << std::endl;
  if (this->sugar > 0)
  {
    std::cout << "Put some sugar     : " << this->sugar << " pieces" << std::endl;
  }
}

int MilkChocolate::cost()
{
  return this->Chocolate::cost() + static_cast<int>(milkVolume / 20.0);
}

void MilkChocolate::drink()
{
  std::cout << "Drink milk chocolate beverage!" << std::endl;
}
