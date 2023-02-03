#include <iostream>

#include "checkbox_buttons.hpp"


//CheckboxButton
CheckboxButton::CheckboxButton() {}

void CheckboxButton::draw()
{
  std::cout << "Drawing a checkbox button." << std::endl;
}


//LargeCheckboxButton
LargeCheckboxButton::LargeCheckboxButton()
: CheckboxButton() {}

void LargeCheckboxButton::draw()
{
  std::cout << "Setting size to large..." << std::endl;
  this->CheckboxButton::draw();
}


//MediumCheckboxButton
MediumCheckboxButton::MediumCheckboxButton()
: CheckboxButton() {}

void MediumCheckboxButton::draw()
{
  std::cout << "Setting size to medium..." << std::endl;
  this->CheckboxButton::draw();
}


//SmallCheckboxButton
SmallCheckboxButton::SmallCheckboxButton()
: CheckboxButton() {}

void SmallCheckboxButton::draw()
{
  std::cout << "Setting size to small..." << std::endl;
  this->CheckboxButton::draw();
}
