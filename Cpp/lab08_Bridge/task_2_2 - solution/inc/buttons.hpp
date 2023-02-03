#pragma once
#include "control_sizes.hpp"


class Button
{
public:
  Button(ControlSize*);
  virtual void draw();

protected:
  ControlSize* controlSize;
};


class CheckboxButton: public Button
{
public:
  CheckboxButton(ControlSize*);
  void draw();
};


class DropdownButton: public Button
{
public:
  DropdownButton(ControlSize*);
  void draw();
};


class RadioButton: public Button
{
public:
  RadioButton(ControlSize*);
  void draw();
};
