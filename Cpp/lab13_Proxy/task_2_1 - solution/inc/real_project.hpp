#pragma once
#include "project.hpp"

#include <string>


class RealProject: public Project
{
public:
  RealProject(std::string);
  ~RealProject();
  void run();

private:
  std::string const url;
};
