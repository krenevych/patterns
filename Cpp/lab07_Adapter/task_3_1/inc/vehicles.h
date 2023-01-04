#pragma once

#include <string>


class Vehicle
{
public:
  Vehicle(int, std::string, float, int);
  int getAge() const;
  std::string getModel() const;
  float getDamage() const;
  int getMileage() const;

protected:
  std::string model = "default";  // марка автомобіля
  int age = 0;					          // вік автомобіля в роках
  int mileage = 0;				        // пробіг автомобіля в милях
  float damage = 0.;				      // ступінь пошкодження автомобіля: 0 - без пошкоджено,
                                  // 1 - максимальне пошкодження, не підлягає ремону
};


class Car: public Vehicle
{
public:
  Car(int, std::string, float);
  ~Car();
};


class Truck: public Vehicle
{
public:
  Truck(int, int);
  ~Truck();
};
