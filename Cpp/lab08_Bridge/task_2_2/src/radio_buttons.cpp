#include "radio_buttons.h"

#include <iostream>


//RadioButton
RadioButton::RadioButton() {}

RadioButton::~RadioButton() {}

void RadioButton::draw()
{
  std::cout << "Drawing a radio button." << std::endl;
}


//LargeRadioButton
LargeRadioButton::LargeRadioButton()
: RadioButton() {}

LargeRadioButton::~LargeRadioButton() {}

void LargeRadioButton::draw()
{
  std::cout << "Setting size to large..." << std::endl;
  this->RadioButton::draw();
}


//MediumRadioButton
MediumRadioButton::MediumRadioButton()
: RadioButton() {}

MediumRadioButton::~MediumRadioButton() {}

void MediumRadioButton::draw()
{
  std::cout << "Setting size to medium..." << std::endl;
  this->RadioButton::draw();
}


//SmallRadioButton
SmallRadioButton::SmallRadioButton()
: RadioButton() {}

SmallRadioButton::~SmallRadioButton() {}

void SmallRadioButton::draw()
{
  std::cout << "Setting size to small..." << std::endl;
  this->RadioButton::draw();
}
