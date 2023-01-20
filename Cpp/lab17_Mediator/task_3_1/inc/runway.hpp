#pragma once


class Runway
{
public:
  Runway();
  void setIsAvailable(bool);
  bool getIsAvailable() const;

private:
  bool isAvailable;
};
