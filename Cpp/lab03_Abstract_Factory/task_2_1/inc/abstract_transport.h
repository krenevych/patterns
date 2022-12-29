#pragma once

class Bus
{
private:
  const int cost;     // Вартість
  const int usagecost;  //  Вартість експлуатації

public:
  Bus(int, int);
  virtual ~Bus();
  int getCost();
  int getUsageCost();
  virtual void goByWay() = 0;
};


class Tram
{
private:
  const int cost;     // Вартість
  const int usagecost;  //  Вартість експлуатації

public:
  Tram(int, int);
  virtual ~Tram();
  int getCost();
  int getUsageCost();
  virtual void goByRails() = 0;
};


class Trolleybus
{
private:
  const int cost;     // Вартість
  const int usagecost;  //  Вартість експлуатації

public:
  Trolleybus(int, int);
  virtual ~Trolleybus();
  int getCost();
  int getUsageCost();
  virtual void goByContactNetwork() = 0;
};
