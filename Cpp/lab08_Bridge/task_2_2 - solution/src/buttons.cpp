#include <iostream>

#include "buttons.hpp"


//Button
Button::Button(ControlSize* controlSize)
: controlSize(controlSize) {}

void Button::draw()
{
  this->controlSize->applySize();
}


//CheckboxButton
CheckboxButton::CheckboxButton(ControlSize* controlSize)
: Button(controlSize) {}

void CheckboxButton::draw()
{
  this->Button::draw();
  std::cout << "Drawing a checkbox button." << std::endl;
}


//DropdownButton
DropdownButton::DropdownButton(ControlSize* controlSize)
: Button(controlSize) {}

void DropdownButton::draw()
{
  this->Button::draw();
  std::cout << "Drawing a dropdown button." << std::endl;
}


//RadioButton
RadioButton::RadioButton(ControlSize* controlSize)
: Button(controlSize) {}

void RadioButton::draw()
{
  this->Button::draw();
  std::cout << "Drawing a radio button." << std::endl;
}
