#include "route_strategies.hpp"


std::string RoadStrategy::buildRoute(std::string const& A, std::string const& B)
{
  return "Автомобільний маршрут з пункту " + A + " до пункту " + B;
}


std::string BykeStrategy::buildRoute(std::string const& A, std::string const& B)
{
  return "Крути педалі поки в очах не потемніє";
}
