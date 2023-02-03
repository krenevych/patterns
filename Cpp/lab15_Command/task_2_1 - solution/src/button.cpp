#include "button.hpp"


Button::Button() {}

void Button::click()
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
