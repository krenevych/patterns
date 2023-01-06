#pragma once

#include <string>


class PrintableString
{
public:
  PrintableString(std::string const&);
  virtual ~PrintableString();
  void print();

private:
  std::string const base;
};
