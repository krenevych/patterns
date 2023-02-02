#pragma once
#include <string>
#include <iostream>


class MilitaryObject
{
protected:
  std::string name;

public:
  MilitaryObject(std::string const&);
};


class GeneralStaff: public MilitaryObject
{
private:
  int generals;
  int secretPaper;

public:
  GeneralStaff(std::string const&, int, int);

  friend std::ostream& operator<<(std::ostream&, GeneralStaff const&);
};


class MilitaryBase: public MilitaryObject
{
private:
  int officers;
  int soldiers;
  int jeeps;
  int tanks;

public:
  MilitaryBase(std::string const&, int, int, int, int);

  friend std::ostream& operator<<(std::ostream&, MilitaryBase const&);
};
