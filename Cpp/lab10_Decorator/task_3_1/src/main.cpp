#include "printable_string.hpp"


int main()
{
  PrintableString* hello = new PrintableString("Hello, World!\n");
  hello->print();

  return 0;
}
