#pragma once
#include "abstract_transport.hpp"


class ScodaBus: public Bus
{
public:
  ScodaBus();
  void goByWay();
};


class ScodaTram: public Tram
{
public:
  ScodaTram();
  void goByRails();
};


class ScodaTrolleybus: public Trolleybus
{
public:
  ScodaTrolleybus();
  void goByContactNetwork();
};
