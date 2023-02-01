#include <iostream>

#include "navigator.hpp"


void Navigator::setStrategy(RouteStrategy* strategy)
{
  this->strategy = strategy;
}

void Navigator::buildRoute(std::string A, std::string B)
{
  if (strategy == nullptr)
  {
    std::cerr << "Стратегія не вибрана" << std::endl;
  }

  std::string route = this->strategy->buildRoute(A, B);
  std::cout << "Маршрут побудовано: " << route << std::endl;
}
