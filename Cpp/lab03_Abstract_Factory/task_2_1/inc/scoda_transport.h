#pragma once

#include "abstract_transport.h"


class ScodaBus: public Bus
{
public:
  ScodaBus();
  ~ScodaBus();
  void goByWay();
};


class ScodaTram: public Tram
{
public:
  ScodaTram();
  ~ScodaTram();
  void goByRails();
};


class ScodaTrolleybus: public Trolleybus
{
public:
  ScodaTrolleybus();
  ~ScodaTrolleybus();
  void goByContactNetwork();
};
