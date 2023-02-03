#pragma once
#include "command.hpp"


class Button
{
public:
  Button();
  void click();
  void setCommand(Command* command);

private:
  Command* command;
};
