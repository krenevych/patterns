#include "menu_item.hpp"


MenuItem::MenuItem() {}

void MenuItem::select()
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
