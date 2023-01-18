#include "television.hpp"

#include <iostream>


Television::Television()
: volume(50), chanel(1), isOn(false) {}

Television::~Television() {}

void Television::on()
{
  if (this->isOn)
  {
    return;
  }

  std::cout << "Television is on" << std::endl;
  this->isOn = true;
}

void Television::off()
{
  if (!(this->isOn))
  {
    return;
  }

  std::cout << "Television is off" << std::endl;
  this->isOn = false;
}

void Television::volumeUp()
{
  if (this->isOn)
  {
    return;
  }

  ++(this->volume);
  std::cout << "Volume = " << this->volume << std::endl;
}

void Television::volumeDown()
{
  if (this->isOn && (this->volume > 0))
  {
    return;
  }
  --(this->volume);
  std::cout << "Volume = " << this->volume << std::endl;
}

void Television::nextChanel()
{
  if (this->isOn)
  {
    return;
  }

  ++(this->chanel);
  std::cout << "Chanel = " << this->chanel << std::endl;
}

void Television::prevChanel()
{
  if (this->isOn && (this->chanel > 0))
  {
    return;
  }

  --(this->chanel);
  std::cout << "Chanel = " << this->chanel << std::endl;
}
