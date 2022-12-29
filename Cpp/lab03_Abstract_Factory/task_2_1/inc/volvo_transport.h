#pragma once

#include "abstract_transport.h"


class VolvoBus: public Bus
{
public:
  VolvoBus();
  ~VolvoBus();
  void goByWay();
};


class VolvoTram: public Tram
{
public:
  VolvoTram();
  ~VolvoTram();
  void goByRails();
};


class VolvoTrolleybus: public Trolleybus
{
public:
  VolvoTrolleybus();
  ~VolvoTrolleybus();
  void goByContactNetwork();
};
