#pragma once
#include "command.hpp"


class Shortcut
{
public:
  Shortcut();
  void press();
  void setCommand(Command*);

private:
  Command* command;
};
