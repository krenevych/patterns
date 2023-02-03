#pragma once


class ControlSize
{
public:
  virtual void applySize() = 0;
};


class LargeControlSize: public ControlSize
{
public:
  LargeControlSize();
  void applySize();
};


class MediumControlSize: public ControlSize
{
public:
  MediumControlSize();
  void applySize();
};


class SmallControlSize: public ControlSize
{
public:
  SmallControlSize();
  void applySize();
};
