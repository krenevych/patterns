#include "car_facade.h"

#include "accelerator.h"
#include "clutch.h"
#include "gear_stick.h"
#include "handbrake.h"
#include "ignition.h"


CarFacade::CarFacade() {}

CarFacade::~CarFacade() {}

void CarFacade::drive()
{
  Ignition ignition = Ignition();
  Clutch clutch = Clutch();
  Accelerator accelerator = Accelerator();
  GearStick gearStick = GearStick();
  Handbrake handbrake = Handbrake();

  ignition.turnOn();
  clutch.press();
  gearStick.changeGear(1);
  accelerator.press();
  clutch.lift();
  handbrake.pushDown();
  accelerator.press();
  clutch.press();
}
