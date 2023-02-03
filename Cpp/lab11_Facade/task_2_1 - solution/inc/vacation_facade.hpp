#pragma once
#include "car_rental.hpp"
#include "flight.hpp"
#include "hotel.hpp"


class VacationFacade
{
public:
  VacationFacade();
  void book(boost::gregorian::date const&, boost::gregorian::date const&);
};
