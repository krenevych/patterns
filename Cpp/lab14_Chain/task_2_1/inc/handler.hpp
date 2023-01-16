#pragma once
#include <string>


class Handler
{
public:
  virtual void open(std::string) = 0;
  virtual void setNext(Handler*) = 0;
};
