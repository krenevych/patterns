#pragma once
#include "button.hpp"


class CheckboxButton: public Button
{
public:
  CheckboxButton();
  virtual void draw();
};


class LargeCheckboxButton: public CheckboxButton
{
public:
  LargeCheckboxButton();
  void draw() override;
};


class MediumCheckboxButton: public CheckboxButton
{
public:
  MediumCheckboxButton();
  void draw() override;
};


class SmallCheckboxButton: public CheckboxButton
{
public:
  SmallCheckboxButton();
  void draw() override;
};
