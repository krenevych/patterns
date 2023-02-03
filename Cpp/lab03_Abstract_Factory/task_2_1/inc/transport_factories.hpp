#pragma once
#include "abstract_transport.hpp"
#include "scoda_transport.hpp"
#include "volvo_transport.hpp"


class TransportFactory
{
public:
  virtual Bus* createBus() = 0;
  virtual Tram* createTram() = 0;
  virtual Trolleybus* createTrolley() = 0;
};


class ScodaFactory: public TransportFactory
{
public:
  ScodaFactory();
  ScodaBus* createBus();
  ScodaTram* createTram();
  ScodaTrolleybus* createTrolley();
};


class VolvoFactory: public TransportFactory
{
public:
  VolvoFactory();
  VolvoBus* createBus();
  VolvoTram* createTram();
  VolvoTrolleybus* createTrolley();
};
