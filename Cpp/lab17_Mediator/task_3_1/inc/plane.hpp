#pragma once
#include "runway.hpp"


class PlanesInFlight;
class PlanesOnGround;

class Plane
{
public:
  Plane(int);
  ~Plane();
  void takeOff();
  void takeOn();
  bool getIsInTheAir() const;
  void setIsInTheAir(bool);
  int getId() const;

private:
  bool isInTheAir;
  int id;
  Runway* runway;
  PlanesInFlight* planesInFlight;
  PlanesOnGround* planesOnGround;
};
