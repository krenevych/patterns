#include "vehicle_factory.hpp"


Vehicle* VehicleFactory::getVehicle(int type)
{
  auto iter = this->vehicles.find(type);

  if (iter == this->vehicles.end())
  {
    Vehicle* vehicle;
    switch (type)
    {
      case 0:
      {
        vehicle = new Car();
        break;
      }
      case 1:
      {
        vehicle = new Truck();
        break;
      }
    }

    iter = this->vehicles.emplace_hint(iter, type, vehicle);
  }

  return std::get<1>(*iter);
}
