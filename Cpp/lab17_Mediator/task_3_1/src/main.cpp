#include "plane.hpp"
#include "runway.hpp"
#include "planes_in_flight.hpp"
#include "planes_on_ground.hpp"


int main()
{
  Plane plane{123};
  plane.takeOff();
  plane.takeOn();

  return 0;
}
