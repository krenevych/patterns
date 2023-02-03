#include "shortcut.hpp"


Shortcut::Shortcut() {}

void Shortcut::press()
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
