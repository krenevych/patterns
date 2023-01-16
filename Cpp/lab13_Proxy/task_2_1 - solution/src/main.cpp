#include <random>
#include <vector>

#include "real_project.hpp"
#include "project_proxy.hpp"


int main()
{
  using namespace std;

  vector<Project*> projects {
    new ProjectProxy("github.com/krenevych/project1"),
    new ProjectProxy("github.com/krenevych/project2"),
    new ProjectProxy("github.com/krenevych/project3"),
    new ProjectProxy("github.com/krenevych/project4"),
    new ProjectProxy("github.com/krenevych/project5"),
    new ProjectProxy("github.com/krenevych/project6"),
  };

  std::random_device dev;
  std::mt19937 generator(dev());
  uniform_int_distribution<int> uniform_int_distr(0, projects.size()-1);

  int projectNum = uniform_int_distr(generator);
  projects[projectNum]->run();

  return 0;
}
