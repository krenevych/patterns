#include <iostream>

#include "dropdown_buttons.hpp"


//DropdownButton
DropdownButton::DropdownButton() {}

void DropdownButton::draw()
{
  std::cout << "Drawing a dropdown button." << std::endl;
}


//LargeCheckboxButton
LargeDropdownButton::LargeDropdownButton()
: DropdownButton() {}

void LargeDropdownButton::draw()
{
  std::cout << "Setting size to large..." << std::endl;
  this->DropdownButton::draw();
}


//MediumDropdownButton
MediumDropdownButton::MediumDropdownButton()
: DropdownButton() {}

void MediumDropdownButton::draw()
{
  std::cout << "Setting size to medium..." << std::endl;
  this->DropdownButton::draw();
}


//SmallDropdownButton
SmallDropdownButton::SmallDropdownButton()
: DropdownButton() {}

void SmallDropdownButton::draw()
{
  std::cout << "Setting size to small..." << std::endl;
  this->DropdownButton::draw();
}
