#include <iostream>

#include "image.hpp"
#include "handlers.hpp"


int main()
{
  using namespace std;

  Handler* handlerCamera = new PropertyHandlerCamera("Samsung Galaxy S22 Ultra");
  Handler* handlerType = new PropertyHandlerType(Image::Type::jpg);
  Handler* handlerDateTime = new PropertyHandlerDateTime();
  Handler* handlerName = new PropertyHandlerName();
  handlerCamera->setNext(handlerType);
  handlerType->setNext(handlerDateTime);
  handlerDateTime->setNext(handlerName);

  Image image = Image();
  handlerCamera->setProperty(image);

  cout << image << endl;

  return 0;
}
