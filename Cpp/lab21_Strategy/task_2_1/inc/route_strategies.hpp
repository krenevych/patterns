#pragma once
#include <string>


class RouteStrategy
{
public:
  virtual std::string buildRoute(std::string const&, std::string const&) = 0;
};


class RoadStrategy: public RouteStrategy
{
public:
  std::string buildRoute(std::string const&, std::string const&);
};


class BykeStrategy: public RouteStrategy
{
public:
  std::string buildRoute(std::string const&, std::string const&);
};
