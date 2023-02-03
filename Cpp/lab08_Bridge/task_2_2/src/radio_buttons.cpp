#include <iostream>

#include "radio_buttons.hpp"


//RadioButton
RadioButton::RadioButton() {}

void RadioButton::draw()
{
  std::cout << "Drawing a radio button." << std::endl;
}


//LargeRadioButton
LargeRadioButton::LargeRadioButton()
: RadioButton() {}

void LargeRadioButton::draw()
{
  std::cout << "Setting size to large..." << std::endl;
  this->RadioButton::draw();
}


//MediumRadioButton
MediumRadioButton::MediumRadioButton()
: RadioButton() {}

void MediumRadioButton::draw()
{
  std::cout << "Setting size to medium..." << std::endl;
  this->RadioButton::draw();
}


//SmallRadioButton
SmallRadioButton::SmallRadioButton()
: RadioButton() {}

void SmallRadioButton::draw()
{
  std::cout << "Setting size to small..." << std::endl;
  this->RadioButton::draw();
}
