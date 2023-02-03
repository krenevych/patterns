#pragma once
#include "button.hpp"


class RadioButton: public Button
{
public:
  RadioButton();
  virtual void draw();
};


class LargeRadioButton: public RadioButton
{
public:
  LargeRadioButton();
  void draw() override;
};


class MediumRadioButton: public RadioButton
{
public:
  MediumRadioButton();
  void draw() override;
};


class SmallRadioButton: public RadioButton
{
public:
  SmallRadioButton();
  void draw() override;
};
