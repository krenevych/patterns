#include "navigator.hpp"


int main()
{
  Navigator navigator;
  RouteStrategy* strategy = new BykeStrategy();
  //RouteStrategy* strategy = new RoadStrategy();

  navigator.setStrategy(strategy);
  navigator.buildRoute("Троєщина", "Теремки");

  return 0;
}
