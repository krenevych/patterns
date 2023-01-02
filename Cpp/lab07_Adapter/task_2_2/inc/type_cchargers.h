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
  ~FastCharge();
  float getOutputPower() const;

protected:
  const float power;
};
