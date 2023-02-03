#include "car_factories.hpp"


AudiFactory::AudiFactory() {}

Audi* AudiFactory::create()
{
  return new Audi();
}


FordFactory::FordFactory() {}

Ford* FordFactory::create()
{
  return new Ford();
}


MazdaFactory::MazdaFactory() {}

Mazda* MazdaFactory::create()
{
  return new Mazda();
}


ToyotaFactory::ToyotaFactory() {}

Toyota* ToyotaFactory::create()
{
  return new Toyota();
}


VWFactory::VWFactory() {}

VW* VWFactory::create()
{
  return new VW();
}
