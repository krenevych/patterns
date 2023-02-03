#pragma once
#include "button.hpp"


class DropdownButton: public Button
{
public:
  DropdownButton();
  virtual void draw();
};


class LargeDropdownButton: public DropdownButton
{
public:
  LargeDropdownButton();
  void draw() override;
};


class MediumDropdownButton: public DropdownButton
{
public:
  MediumDropdownButton();
  void draw() override;
};


class SmallDropdownButton: public DropdownButton
{
public:
  SmallDropdownButton();
  void draw() override;
};
