#include "vacation_facade.hpp"


VacationFacade::VacationFacade() {}

void VacationFacade::book(boost::gregorian::date const& startDate, boost::gregorian::date const& endDate)
{
  Flight flight;
  flight.bookOutwardJourney(startDate);
  flight.bookReturnJourney(endDate);

  Hotel hotel;
  hotel.book(startDate, endDate);

  CarRental carRental;
  carRental.book(startDate, endDate);
}
