#pragma once


class GearStick
{
public:
  GearStick();
  ~GearStick();
  void changeGear(int);

private:
  int gear = 0;
};
