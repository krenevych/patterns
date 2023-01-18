#pragma once
#include "command.hpp"


class MenuItem
{
public:
  MenuItem();
  ~MenuItem();
  void select() const;
  void setCommand(Command*);

private:
  Command* command;
};
