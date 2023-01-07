#pragma once


class Handbrake
{
public:
  Handbrake();
  ~Handbrake();
  void pushDown();
  void liftUp();

private:
  bool isUp = true;
};
