#include <iostream>

#include "control_sizes.hpp"


//LargeControlSize
LargeControlSize::LargeControlSize() {}

void LargeControlSize::applySize()
{
  std::cout << "Setting size to large..." << std::endl;
}

//MediumControlSize
MediumControlSize::MediumControlSize() {}

void MediumControlSize::applySize()
{
  std::cout << "Setting size to medium..." << std::endl;
}

//SmallControlSize
SmallControlSize::SmallControlSize() {}

void SmallControlSize::applySize()
{
  std::cout << "Setting size to small..." << std::endl;
}
