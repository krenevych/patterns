#include "accelerator.hpp"
#include "clutch.hpp"
#include "gear_stick.hpp"
#include "handbrake.hpp"
#include "ignition.hpp"


int main()
{
  Ignition ignition;
  Clutch clutch;
  Accelerator accelerator;
  GearStick gearStick;
  Handbrake handbrake;

  ignition.turnOn();
  clutch.press();
  gearStick.changeGear(1);
  accelerator.press();
  clutch.lift();
  handbrake.pushDown();
  accelerator.press();
  clutch.press();

  return 0;
}
