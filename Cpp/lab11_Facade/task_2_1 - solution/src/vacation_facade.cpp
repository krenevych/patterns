#include "vacation_facade.h"


VacationFacade::VacationFacade() {}

VacationFacade::~VacationFacade() {}

void VacationFacade::book(boost::gregorian::date const& startDate, boost::gregorian::date const& endDate)
{
  Flight flight = Flight();
  flight.bookOutwardJourney(startDate);
  flight.bookReturnJourney(endDate);

  Hotel hotel = Hotel();
  hotel.book(startDate, endDate);

  CarRental carRental = CarRental();
  carRental.book(startDate, endDate);
}
