#pragma once


class TypeCCharger
{
public:
  virtual float getOutputPower() const = 0;
};


class FastCharge: public TypeCCharger
{
public:
  FastCharge(float);
  float getOutputPower() const;

protected:
  float const power;
};
