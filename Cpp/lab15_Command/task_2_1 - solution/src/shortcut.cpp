#include "shortcut.hpp"


Shortcut::Shortcut() {}

Shortcut::~Shortcut() {}

void Shortcut::press() const
{
  if (this->command != nullptr)
  {
    this->command->execute();
  }
}

void Shortcut::setCommand(Command* command)
{
  this->command = command;
}
