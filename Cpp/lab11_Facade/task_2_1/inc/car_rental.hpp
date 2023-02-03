#pragma once
#include <boost/date_time/gregorian/gregorian.hpp>


class CarRental
{
public:
  CarRental();
  void book(boost::gregorian::date const&, boost::gregorian::date const&);
};
