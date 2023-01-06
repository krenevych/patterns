#include "printable_string.h"

#include <iostream>


PrintableString::PrintableString(std::string const& base)
: base(base) {}

PrintableString::~PrintableString() {}

void PrintableString::print()
{
  std::cout << this->base;
}
