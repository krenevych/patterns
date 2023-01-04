#pragma once

#include "button.h"


class RadioButton: public Button
{
public:
  RadioButton();
  ~RadioButton();
  virtual void draw();
};


class LargeRadioButton: public RadioButton
{
public:
  LargeRadioButton();
  ~LargeRadioButton();
  void draw() override;
};


class MediumRadioButton: public RadioButton
{
public:
  MediumRadioButton();
  ~MediumRadioButton();
  void draw() override;
};


class SmallRadioButton: public RadioButton
{
public:
  SmallRadioButton();
  ~SmallRadioButton();
  void draw() override;
};
