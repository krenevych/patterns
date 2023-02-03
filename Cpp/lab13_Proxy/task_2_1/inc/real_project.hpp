#pragma once
#include <string>

#include "project.hpp"


class RealProject: public Project
{
public:
  RealProject(std::string const&);
  void run();

private:
  std::string const url;
};
