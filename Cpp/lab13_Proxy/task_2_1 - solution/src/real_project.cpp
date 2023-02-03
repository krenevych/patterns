#include <iostream>

#include "real_project.hpp"


RealProject::RealProject(std::string const& url)
: url(url)
{
  std::cout << "Loading project " << url << "..." << std::endl;
}

void RealProject::run()
{
  std::cout << "Running project " << url << "..." << std::endl;
}
