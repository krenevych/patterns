#pragma once


class MicroUsbCharger
{
public:
  virtual float getOutputVoltage() const = 0;
  virtual float getOutputAmperage() const = 0;
};


class Charger: public MicroUsbCharger
{
public:
  Charger(float, float);
  float getOutputVoltage() const;
  float getOutputAmperage() const;

protected:
  float const voltage;
  float const amperage;
};
