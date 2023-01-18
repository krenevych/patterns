#include "menu_item.hpp"


MenuItem::MenuItem() {}

MenuItem::~MenuItem() {}

void MenuItem::select() const
{
  if (this->command != nullptr)
  {
    this->command->execute();
  }
}

void MenuItem::setCommand(Command* command)
{
  this->command = command;
}
