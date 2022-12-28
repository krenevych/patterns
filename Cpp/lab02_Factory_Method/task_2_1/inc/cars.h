#pragma once

class Car
{
public:
  Car();
  virtual ~Car();
  virtual void run() = 0;
};


class Audi: public Car
{
public:
  Audi();
  ~Audi();
  void run();
};


class Ford: public Car
{
public:
  Ford();
  ~Ford();
  void run();
};


class Mazda: public Car
{
public:
  Mazda();
  ~Mazda();
  void run();
};


class Toyota: public Car
{
public:
  Toyota();
  ~Toyota();
  void run();
};


class VW: public Car
{
public:
  VW();
  ~VW();
  void run();
};
