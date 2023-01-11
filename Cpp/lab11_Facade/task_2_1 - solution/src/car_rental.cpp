#include "car_rental.h"

#include <iostream>


CarRental::CarRental() {}

CarRental::~CarRental() {}

void CarRental::book(boost::gregorian::date const& start, boost::gregorian::date const& end)
{
  std::cout << "Booking car for " << start << " to " << end << std::endl;
}
