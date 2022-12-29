#include "transport_factories.h"


TransportFactory::TransportFactory() {}
TransportFactory::~TransportFactory() {}


ScodaFactory::ScodaFactory()
: TransportFactory() {}

ScodaFactory::~ScodaFactory() {}

ScodaBus* ScodaFactory::createBus()
{
  return new ScodaBus();
}

ScodaTram* ScodaFactory::createTram()
{
  return new ScodaTram();
}

ScodaTrolleybus* ScodaFactory::createTrolley()
{
  return new ScodaTrolleybus();
}


VolvoFactory::VolvoFactory()
: TransportFactory() {}

VolvoFactory::~VolvoFactory() {}

VolvoBus* VolvoFactory::createBus()
{
  return new VolvoBus();
}

VolvoTram* VolvoFactory::createTram()
{
  return new VolvoTram();
}

VolvoTrolleybus* VolvoFactory::createTrolley()
{
  return new VolvoTrolleybus();
}
