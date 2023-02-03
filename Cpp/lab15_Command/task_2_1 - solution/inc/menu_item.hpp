#pragma once
#include "command.hpp"


class MenuItem
{
public:
  MenuItem();
  void select();
  void setCommand(Command*);

private:
  Command* command;
};
