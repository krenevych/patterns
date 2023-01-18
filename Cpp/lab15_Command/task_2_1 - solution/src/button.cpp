#include "button.hpp"


Button::Button() {}

Button::~Button() {}

void Button::click() const
{
  if (this->command != nullptr)
  {
    this->command->execute();
  }
}

void Button::setCommand(Command* command)
{
  this->command = command;
}
