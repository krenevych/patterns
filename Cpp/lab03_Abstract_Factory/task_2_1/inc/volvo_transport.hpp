#pragma once
#include "abstract_transport.hpp"


class VolvoBus: public Bus
{
public:
  VolvoBus();
  void goByWay();
};


class VolvoTram: public Tram
{
public:
  VolvoTram();
  void goByRails();
};


class VolvoTrolleybus: public Trolleybus
{
public:
  VolvoTrolleybus();
  void goByContactNetwork();
};
