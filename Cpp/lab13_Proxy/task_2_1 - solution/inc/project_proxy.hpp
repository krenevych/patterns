#pragma once
#include <string>

#include "project.hpp"


class ProjectProxy: public Project
{
public:
  ProjectProxy(std::string const&);
  void run();

private:
  Project* project;
  std::string const url;
};
