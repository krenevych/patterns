#include <iostream>

#include "plane.hpp"
#include "runway.hpp"
#include "planes_in_flight.hpp"
#include "planes_on_ground.hpp"


Plane::Plane(int id)
: id(id),
  isInTheAir(false),
  runway(new Runway()),
  planesInFlight(new PlanesInFlight()),
  planesOnGround(new PlanesOnGround())
{
  planesOnGround->addPlane(this);
}

Plane::~Plane()
{
  delete this->runway;
  delete this->planesInFlight;
  delete this->planesOnGround;
}

void Plane::takeOff()
{
  if (!this->isInTheAir && this->runway->getIsAvailable())
  {
    std::cout << "Plane " << this->getId() << " is taking off..." << std::endl;
    this->planesOnGround->removePlane(this);
    this->planesInFlight->addPlane(this);
    this->isInTheAir = true;
    this->runway->setIsAvailable(false);
  }
}

void Plane::takeOn()
{
  if (this->isInTheAir && !this->runway->getIsAvailable())
  {
    std::cout << "Plane " << this->getId() << " is taking on..." << std::endl;
    this->planesInFlight->removePlane(this);
    this->planesOnGround->addPlane(this);
    this->isInTheAir = false;
    this->runway->setIsAvailable(true);
  }
}

bool Plane::getIsInTheAir() const
{
  return this->isInTheAir;
}

void Plane::setIsInTheAir(bool isInTheAir)
{
  this->isInTheAir = isInTheAir;
}

int Plane::getId() const
{
  return this->id;
}
