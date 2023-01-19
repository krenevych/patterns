#pragma once
#include <string>
#include <map>


class ECommerceSite
{
public:
  ECommerceSite();
  bool checkInStock(std::string const&, int);
  void sell(std::string const&, int);

private:
  std::map<std::string, int> stock;
};
