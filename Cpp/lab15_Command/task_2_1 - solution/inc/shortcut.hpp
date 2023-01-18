#pragma once
#include "command.hpp"


class Shortcut
{
public:
  Shortcut();
  ~Shortcut();
  void press() const;
  void setCommand(Command*);

private:
  Command* command;
};
