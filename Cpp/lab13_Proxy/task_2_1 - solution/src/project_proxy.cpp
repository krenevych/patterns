#include "project_proxy.hpp"
#include "real_project.hpp"


ProjectProxy::ProjectProxy(std::string const& url)
: url(url) {}

void ProjectProxy::run()
{
  if (this->project == nullptr)
  {
    this->project = new RealProject(this->url);
  }
  project->run();
}
