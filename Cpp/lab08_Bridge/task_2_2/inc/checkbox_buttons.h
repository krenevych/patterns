#pragma once

#include "button.h"


class CheckboxButton: public Button
{
public:
  CheckboxButton();
  ~CheckboxButton();
  virtual void draw();
};


class LargeCheckboxButton: public CheckboxButton
{
public:
  LargeCheckboxButton();
  ~LargeCheckboxButton();
  void draw() override;
};


class MediumCheckboxButton: public CheckboxButton
{
public:
  MediumCheckboxButton();
  ~MediumCheckboxButton();
  void draw() override;
};


class SmallCheckboxButton: public CheckboxButton
{
public:
  SmallCheckboxButton();
  ~SmallCheckboxButton();
  void draw() override;
};
