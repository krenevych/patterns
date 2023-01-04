#include "dropdown_buttons.h"

#include <iostream>


//DropdownButton
DropdownButton::DropdownButton() {}

DropdownButton::~DropdownButton() {}

void DropdownButton::draw()
{
  std::cout << "Drawing a dropdown button." << std::endl;
}


//LargeCheckboxButton
LargeDropdownButton::LargeDropdownButton()
: DropdownButton() {}

LargeDropdownButton::~LargeDropdownButton() {}

void LargeDropdownButton::draw()
{
  std::cout << "Setting size to large..." << std::endl;
  this->DropdownButton::draw();
}


//MediumDropdownButton
MediumDropdownButton::MediumDropdownButton()
: DropdownButton() {}

MediumDropdownButton::~MediumDropdownButton() {}

void MediumDropdownButton::draw()
{
  std::cout << "Setting size to medium..." << std::endl;
  this->DropdownButton::draw();
}


//SmallDropdownButton
SmallDropdownButton::SmallDropdownButton()
: DropdownButton() {}

SmallDropdownButton::~SmallDropdownButton() {}

void SmallDropdownButton::draw()
{
  std::cout << "Setting size to small..." << std::endl;
  this->DropdownButton::draw();
}
