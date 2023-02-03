#include <iostream>

#include "printable_string.hpp"


PrintableString::PrintableString(std::string const& base)
: base(base) {}

void PrintableString::print()
{
  std::cout << this->base;
}
