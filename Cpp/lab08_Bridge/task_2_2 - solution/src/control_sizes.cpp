#include "control_sizes.h"

#include <iostream>


//LargeControlSize
LargeControlSize::LargeControlSize() {}

LargeControlSize::~LargeControlSize() {}

void LargeControlSize::applySize()
{
  std::cout << "Setting size to large..." << std::endl;
}

//MediumControlSize
MediumControlSize::MediumControlSize() {}

MediumControlSize::~MediumControlSize() {}

void MediumControlSize::applySize()
{
  std::cout << "Setting size to medium..." << std::endl;
}

//SmallControlSize
SmallControlSize::SmallControlSize() {}

SmallControlSize::~SmallControlSize() {}

void SmallControlSize::applySize()
{
  std::cout << "Setting size to small..." << std::endl;
}
