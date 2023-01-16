#include "project_proxy.hpp"
#include "real_project.hpp"


ProjectProxy::ProjectProxy(std::string url)
: url(url) {}

ProjectProxy::~ProjectProxy() {}

void ProjectProxy::run()
{
  if (this->project == nullptr)
  {
    this->project = new RealProject(this->url);
  }
  project->run();
}
