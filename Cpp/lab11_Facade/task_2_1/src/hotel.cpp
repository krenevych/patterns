#include <iostream>

#include "hotel.hpp"


Hotel::Hotel() {}

void Hotel::book(boost::gregorian::date const& checkinDate, boost::gregorian::date const& checkoutDate)
{
  std::cout << "Booking hotel for " << checkinDate << " to " << checkoutDate << std::endl;
}
