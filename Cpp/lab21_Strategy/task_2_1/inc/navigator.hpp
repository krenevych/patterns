#pragma once
#include "route_strategies.hpp"


class Navigator
{
public:
  void setStrategy(RouteStrategy*);
  void buildRoute(std::string A, std::string B);

private:
  RouteStrategy* strategy = nullptr;
};
