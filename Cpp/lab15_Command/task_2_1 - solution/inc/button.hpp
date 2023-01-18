#pragma once
#include "command.hpp"


class Button
{
public:
  Button();
  ~Button();
  void click() const;
  void setCommand(Command* command);

private:
  Command* command;
};
