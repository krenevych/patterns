#include "document.hpp"


int main()
{
  Document document;

  document.setText("hello, World!");

  document.publish("user");
  document.publish("user");
  document.abandon("admin");
  document.setText("Hello, World!");
  document.publish("admin");

  return 0;
}
