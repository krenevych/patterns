#include <algorithm>

#include "planes_in_flight.hpp"


PlanesInFlight::PlanesInFlight() {}

void PlanesInFlight::addPlane(Plane* plane)
{
  this->planes.push_back(plane);
}

void PlanesInFlight::removePlane(Plane* plane)
{
  std::remove(this->planes.begin(), this->planes.end(), plane);
}
