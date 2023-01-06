#include "printable_string.h"


int main()
{
  PrintableString* hello = new PrintableString("Hello, World!\n");
  hello->print();

  return 0;
}
