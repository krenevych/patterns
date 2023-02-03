#include "auto.hpp"


class Customs
{
  virtual float vehiclePrice(Auto const*) = 0;		// розрахувати ціну автомобіля
	virtual float tax(Auto const*) = 0;				// розрахувати вартість розмитнення автомобіля
};
