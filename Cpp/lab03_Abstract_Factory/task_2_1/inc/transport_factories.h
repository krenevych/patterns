#pragma once

#include "abstract_transport.h"
#include "scoda_transport.h"
#include "volvo_transport.h"


class TransportFactory
{
public:
  TransportFactory();
  virtual ~TransportFactory();
  virtual Bus* createBus() = 0;
  virtual Tram* createTram() = 0;
  virtual Trolleybus* createTrolley() = 0;
};


class ScodaFactory: public TransportFactory
{
public:
  ScodaFactory();
  ~ScodaFactory();
  ScodaBus* createBus();
  ScodaTram* createTram();
  ScodaTrolleybus* createTrolley();
};


class VolvoFactory: public TransportFactory
{
public:
  VolvoFactory();
  ~VolvoFactory();
  VolvoBus* createBus();
  VolvoTram* createTram();
  VolvoTrolleybus* createTrolley();
};
