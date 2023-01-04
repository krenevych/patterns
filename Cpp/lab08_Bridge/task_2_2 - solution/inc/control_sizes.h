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
  ~LargeControlSize();
  void applySize();
};


class MediumControlSize: public ControlSize
{
public:
  MediumControlSize();
  ~MediumControlSize();
  void applySize();
};


class SmallControlSize: public ControlSize
{
public:
  SmallControlSize();
  ~SmallControlSize();
  void applySize();
};
