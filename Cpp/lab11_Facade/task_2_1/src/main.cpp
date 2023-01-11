#include "boost/date_time/gregorian/gregorian_types.hpp"

#include "car_rental.h"
#include "flight.h"
#include "hotel.h"


int main ()
{
  using namespace std;
  using namespace boost::gregorian;

  date startDate(2021, 8, 1);
  date endDate(2021, 8, 15);

  CarRental carRental = CarRental();
  carRental.book(startDate, endDate);

  Flight flight = Flight();
  flight.bookOutwardJourney(startDate);
  flight.bookReturnJourney(endDate);

  Hotel hotel = Hotel();
  hotel.book(startDate, endDate);

  return 0;
}
