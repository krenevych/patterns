#pragma once


class Device
{
public:
  virtual void on() = 0;
  virtual void off() = 0;
  virtual void volumeUp() = 0;
  virtual void volumeDown() = 0;
  virtual void nextChanel() = 0;
  virtual void prevChanel() = 0;
};
