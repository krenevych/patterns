#include <boost/date_time/gregorian/gregorian_types.hpp>

#include "car_rental.hpp"
#include "flight.hpp"
#include "hotel.hpp"


int main ()
{
  using namespace std;
  using namespace boost::gregorian;

  date startDate(2021, 8, 1);
  date endDate(2021, 8, 15);

  CarRental carRental;
  carRental.book(startDate, endDate);

  Flight flight;
  flight.bookOutwardJourney(startDate);
  flight.bookReturnJourney(endDate);

  Hotel hotel;
  hotel.book(startDate, endDate);

  return 0;
}
