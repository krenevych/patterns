#pragma once


class Pizza
{
public:
  virtual void makeBase();
  virtual void addToppings();
  virtual void cook() = 0;

  void printInstructions();  // шаблонний метод
};
