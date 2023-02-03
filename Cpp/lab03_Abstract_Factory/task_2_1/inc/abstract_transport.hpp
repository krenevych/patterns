#pragma once


class Bus
{
private:
  int const cost;     // Вартість
  int const usagecost;  //  Вартість експлуатації

public:
  Bus(int, int);
  int getCost() const;
  int getUsageCost() const;
  virtual void goByWay() = 0;
};


class Tram
{
private:
  int const cost;     // Вартість
  int const usagecost;  //  Вартість експлуатації

public:
  Tram(int, int);
  int getCost() const;
  int getUsageCost() const;
  virtual void goByRails() = 0;
};


class Trolleybus
{
private:
  int const cost;     // Вартість
  int const usagecost;  //  Вартість експлуатації

public:
  Trolleybus(int, int);
  int getCost() const;
  int getUsageCost() const;
  virtual void goByContactNetwork() = 0;
};
