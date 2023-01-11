#pragma once

#include "car_rental.h"
#include "flight.h"
#include "hotel.h"


class VacationFacade
{
public:
  VacationFacade();
  ~VacationFacade();
  void book(boost::gregorian::date const&, boost::gregorian::date const&);
};
