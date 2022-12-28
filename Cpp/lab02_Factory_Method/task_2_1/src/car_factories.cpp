#include "car_factories.h"


CarFactory::CarFactory() {}
CarFactory::~CarFactory() {}


AudiFactory::AudiFactory() {}
AudiFactory::~AudiFactory() {}
Audi* AudiFactory::create()
{
  return new Audi();
}


FordFactory::FordFactory() {}
FordFactory::~FordFactory() {}
Ford* FordFactory::create()
{
  return new Ford();
}


MazdaFactory::MazdaFactory() {}
MazdaFactory::~MazdaFactory() {}
Mazda* MazdaFactory::create()
{
  return new Mazda();
}


ToyotaFactory::ToyotaFactory() {}
ToyotaFactory::~ToyotaFactory() {}
Toyota* ToyotaFactory::create()
{
  return new Toyota();
}


VWFactory::VWFactory() {}
VWFactory::~VWFactory() {}
VW* VWFactory::create()
{
  return new VW();
}
