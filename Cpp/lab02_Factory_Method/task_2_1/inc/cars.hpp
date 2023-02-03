#pragma once


class Car
{
public:
  virtual void run() = 0;
};


class Audi: public Car
{
public:
  Audi();
  void run();
};


class Ford: public Car
{
public:
  Ford();
  void run();
};


class Mazda: public Car
{
public:
  Mazda();
  void run();
};


class Toyota: public Car
{
public:
  Toyota();
  void run();
};


class VW: public Car
{
public:
  VW();
  void run();
};
