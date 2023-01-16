#include "real_project.hpp"

#include <iostream>


RealProject::RealProject(std::string url)
: url(url)
{
  std::cout << "Loading project " << url << "..." << std::endl;
}

RealProject::~RealProject() {}

void RealProject::run()
{
  std::cout << "Running project " << url << "..." << std::endl;
}
