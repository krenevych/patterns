#include "tea.h"

#include <iostream>


//Tea
Tea::Tea(int sugar)
: Beverage(sugar) {}

Tea::~Tea() {}

void Tea::prepare()
{
  std::cout << "Put some tea..." << std::endl;
}

int Tea::cost()
{
  return 7;
}


//BlackTee
BlackTea::BlackTea(int sugar, int waterVolume)
: Tea(sugar), waterVolume(waterVolume) {}

BlackTea::~BlackTea() {}

void BlackTea::prepare()
{
  this->Tea::prepare();
  std::cout << "Put some hot watter: " << this->waterVolume << " ml" << std::endl;
  if (this->sugar > 0)
  {
    std::cout << "Put some sugar     : " << this->sugar << " pieces" << std::endl;
  }
}

int BlackTea::cost()
{
  return this->Tea::cost();
}

void BlackTea::drink()
{
  std::cout << "Drink black tea!" << std::endl;
}


//TeaWithMilk
TeaWithMilk::TeaWithMilk(int sugar, int milkVolume)
: Tea(sugar), milkVolume(milkVolume) {}

TeaWithMilk::~TeaWithMilk() {}

void TeaWithMilk::prepare()
{
  this->Tea::prepare();
  std::cout << "Put some milk: " << this->milkVolume << " ml" << std::endl;
  if (this->sugar > 0)
  {
    std::cout << "Put some sugar     : " << this->sugar << " pieces" << std::endl;
  }
}

int TeaWithMilk::cost()
{
  return this->Tea::cost() + static_cast<int>(milkVolume / 20.0);
}

void TeaWithMilk::drink()
{
  std::cout << "Drink tea with milk!" << std::endl;
}
