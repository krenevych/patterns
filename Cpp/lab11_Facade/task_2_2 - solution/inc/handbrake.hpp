#pragma once


class Handbrake
{
public:
  Handbrake();
  void pushDown();
  void liftUp();

private:
  bool isUp = true;
};
