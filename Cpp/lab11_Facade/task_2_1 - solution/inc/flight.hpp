#pragma once
#include <boost/date_time/gregorian/gregorian.hpp>


class Flight
{
public:
  Flight();
  void bookOutwardJourney(boost::gregorian::date const&);
  void bookReturnJourney(boost::gregorian::date const&);
};
