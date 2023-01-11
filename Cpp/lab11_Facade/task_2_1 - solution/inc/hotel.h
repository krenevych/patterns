#pragma once

#include "boost/date_time/gregorian/gregorian.hpp"


class Hotel
{
public:
  Hotel();
  ~Hotel();
  void book(boost::gregorian::date const&, boost::gregorian::date const&);
};
