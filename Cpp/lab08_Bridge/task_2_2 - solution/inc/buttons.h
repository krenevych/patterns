#pragma once

#include "control_sizes.h"


class Button
{
public:
  Button(ControlSize*);
  ~Button();
  virtual void draw();

protected:
  ControlSize* controlSize;
};


class CheckboxButton: public Button
{
public:
  CheckboxButton(ControlSize*);
  ~CheckboxButton();
  void draw();
};


class DropdownButton: public Button
{
public:
  DropdownButton(ControlSize*);
  ~DropdownButton();
  void draw();
};


class RadioButton: public Button
{
public:
  RadioButton(ControlSize*);
  ~RadioButton();
  void draw();
};
