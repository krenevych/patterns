#pragma once
#include <vector>


class Plane;

class PlanesInFlight
{
public:
  std::vector<Plane*> planes;

  PlanesInFlight();
  void addPlane(Plane*);
  void removePlane(Plane*);
};
