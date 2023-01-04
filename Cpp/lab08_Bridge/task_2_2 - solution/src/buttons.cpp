#include "buttons.h"

#include <iostream>


//Button
Button::Button(ControlSize* controlSize)
: controlSize(controlSize) {}

Button::~Button() {}

void Button::draw()
{
  this->controlSize->applySize();
}


//CheckboxButton
CheckboxButton::CheckboxButton(ControlSize* controlSize)
: Button(controlSize) {}

CheckboxButton::~CheckboxButton() {}

void CheckboxButton::draw()
{
  this->Button::draw();
  std::cout << "Drawing a checkbox button." << std::endl;
}


//DropdownButton
DropdownButton::DropdownButton(ControlSize* controlSize)
: Button(controlSize) {}

DropdownButton::~DropdownButton() {}

void DropdownButton::draw()
{
  this->Button::draw();
  std::cout << "Drawing a dropdown button." << std::endl;
}


//RadioButton
RadioButton::RadioButton(ControlSize* controlSize)
: Button(controlSize) {}

RadioButton::~RadioButton() {}

void RadioButton::draw()
{
  this->Button::draw();
  std::cout << "Drawing a radio button." << std::endl;
}
