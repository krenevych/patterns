#include "accelerator.h"

#include <iostream>


Accelerator::Accelerator() {}

Accelerator::~Accelerator() {}

void Accelerator::press()
{
  std::cout << "Pressing accelerator down" << std::endl;
}

void Accelerator::lift()
{
  std::cout << "Lifting accelerator up" << std::endl;
}
