#include "checkbox_buttons.h"

#include <iostream>


//CheckboxButton
CheckboxButton::CheckboxButton() {}

CheckboxButton::~CheckboxButton() {}

void CheckboxButton::draw()
{
  std::cout << "Drawing a checkbox button." << std::endl;
}


//LargeCheckboxButton
LargeCheckboxButton::LargeCheckboxButton()
: CheckboxButton() {}

LargeCheckboxButton::~LargeCheckboxButton() {}

void LargeCheckboxButton::draw()
{
  std::cout << "Setting size to large..." << std::endl;
  this->CheckboxButton::draw();
}


//MediumCheckboxButton
MediumCheckboxButton::MediumCheckboxButton()
: CheckboxButton() {}

MediumCheckboxButton::~MediumCheckboxButton() {}

void MediumCheckboxButton::draw()
{
  std::cout << "Setting size to medium..." << std::endl;
  this->CheckboxButton::draw();
}


//SmallCheckboxButton
SmallCheckboxButton::SmallCheckboxButton()
: CheckboxButton() {}

SmallCheckboxButton::~SmallCheckboxButton() {}

void SmallCheckboxButton::draw()
{
  std::cout << "Setting size to small..." << std::endl;
  this->CheckboxButton::draw();
}
