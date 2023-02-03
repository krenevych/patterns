#include <iostream>

#include "flight.hpp"


Flight::Flight() {}

void Flight::bookOutwardJourney(boost::gregorian::date const& start)
{
  std::cout << "Outbound flight booked for " << start << std::endl;
}

void Flight::bookReturnJourney(boost::gregorian::date const& end)
{
  std::cout << "Return flight booked for " << end << std::endl;
}
