#include <algorithm>

#include "planes_on_ground.hpp"


PlanesOnGround::PlanesOnGround() {}

void PlanesOnGround::addPlane(Plane* plane)
{
  this->planes.push_back(plane);
}

void PlanesOnGround::removePlane(Plane* plane)
{
  std::remove(this->planes.begin(), this->planes.end(), plane);
}
