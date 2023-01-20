#pragma once
#include <vector>


class Plane;

class PlanesOnGround
{
public:
  std::vector<Plane*> planes;

  PlanesOnGround();
  void addPlane(Plane*);
  void removePlane(Plane*);
};
