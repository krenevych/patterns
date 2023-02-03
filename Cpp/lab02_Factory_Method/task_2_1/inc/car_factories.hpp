#pragma once
#include "cars.hpp"


class CarFactory
{
public:
  virtual Car* create() = 0;
};


class AudiFactory: public CarFactory
{
public:
  AudiFactory();
  Audi* create();
};


class FordFactory: public CarFactory
{
public:
  FordFactory();
  Ford* create();
};


class MazdaFactory: public CarFactory
{
public:
  MazdaFactory();
  Mazda* create();
};


class ToyotaFactory: public CarFactory
{
public:
  ToyotaFactory();
  Toyota* create();
};


class VWFactory: public CarFactory
{
public:
  VWFactory();
  VW* create();
};
