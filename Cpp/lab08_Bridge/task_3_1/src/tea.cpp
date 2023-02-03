#include <iostream>

#include "tea.hpp"


//Tea
Tea::Tea(int sugar)
: Beverage(sugar) {}

void Tea::prepare()
{
  std::cout << "Put some tea..." << std::endl;
}

int Tea::cost() const
{
  return 7;
}


//BlackTee
BlackTea::BlackTea(int sugar, int waterVolume)
: Tea(sugar), waterVolume(waterVolume) {}

void BlackTea::prepare()
{
  this->Tea::prepare();
  std::cout << "Put some hot watter: " << this->waterVolume << " ml" << std::endl;
  if (this->sugar > 0)
  {
    std::cout << "Put some sugar     : " << this->sugar << " pieces" << std::endl;
  }
}

int BlackTea::cost() const
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

void TeaWithMilk::prepare()
{
  this->Tea::prepare();
  std::cout << "Put some milk: " << this->milkVolume << " ml" << std::endl;
  if (this->sugar > 0)
  {
    std::cout << "Put some sugar     : " << this->sugar << " pieces" << std::endl;
  }
}

int TeaWithMilk::cost() const
{
  return this->Tea::cost() + static_cast<int>(milkVolume / 20.0);
}

void TeaWithMilk::drink()
{
  std::cout << "Drink tea with milk!" << std::endl;
}
