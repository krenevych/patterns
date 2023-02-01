#include <iostream>

#include "fan.hpp"


void Fan::setState(State state)
{
  this->state = state;
}

Fan::State Fan::getState() const
{
  return this->state;
}

void Fan::turnUp()
{
  switch (this->state)
  {
    case Fan::State::Low:
    {
      this->setState(Fan::State::Medium);
      std::cout << "Fan is on medium" << std::endl;
      break;
    }
    case Fan::State::Medium:
    {
      this->setState(Fan::State::High);
      std::cout << "Fan is on high" << std::endl;
      break;
    }
    case Fan::State::High:
    {
      break;
    }
  }
}

void Fan::turnDown()
{
  switch (this->state)
  {
    case Fan::State::Low:
    {
      break;
    }
    case Fan::State::Medium:
    {
      this->setState(Fan::State::Low);
      std::cout << "Fan is on low" << std::endl;
      break;
    }
    case Fan::State::High:
    {
      this->setState(Fan::State::Medium);
      std::cout << "Fan is on medium" << std::endl;
      break;
    }
  }
}
