#pragma once
#include <string>


class PrintableString
{
public:
  PrintableString(std::string const&);
  void print();

private:
  std::string const base;
};
