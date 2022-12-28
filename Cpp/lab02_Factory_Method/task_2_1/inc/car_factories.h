#pragma once

#include "cars.h"

class CarFactory
{
public:
  CarFactory();
  virtual ~CarFactory();
  virtual Car* create() = 0;
};


class AudiFactory: public CarFactory
{
public:
  AudiFactory();
  ~AudiFactory();
  Audi* create();
};


class FordFactory: public CarFactory
{
public:
  FordFactory();
  ~FordFactory();
  Ford* create();
};


class MazdaFactory: public CarFactory
{
public:
  MazdaFactory();
  ~MazdaFactory();
  Mazda* create();
};


class ToyotaFactory: public CarFactory
{
public:
  ToyotaFactory();
  ~ToyotaFactory();
  Toyota* create();
};


class VWFactory: public CarFactory
{
public:
  VWFactory();
  ~VWFactory();
  VW* create();
};
