#pragma once

#include "button.h"


class DropdownButton: public Button
{
public:
  DropdownButton();
  ~DropdownButton();
  virtual void draw();
};


class LargeDropdownButton: public DropdownButton
{
public:
  LargeDropdownButton();
  ~LargeDropdownButton();
  void draw() override;
};


class MediumDropdownButton: public DropdownButton
{
public:
  MediumDropdownButton();
  ~MediumDropdownButton();
  void draw() override;
};


class SmallDropdownButton: public DropdownButton
{
public:
  SmallDropdownButton();
  ~SmallDropdownButton();
  void draw() override;
};
