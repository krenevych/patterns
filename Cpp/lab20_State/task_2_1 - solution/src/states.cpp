#include <iostream>

#include "document.hpp"
#include "states.hpp"


//StateDraft
StateDraft::StateDraft() {}

void StateDraft::publish(Document* document, std::string const& user)
{
  std::cout << "Документ = " << document->getText() << std::endl;

  if (user == "admin")
  {
    std::cout << "State : Draft -> Published" << std::endl;

    document->setState(new StatePublished());
  }
  else
  {
    std::cout << "State : Draft -> Moderation" << std::endl;

    document->setState(new StateModeration());
  }
}

void StateDraft::abandon(Document* document, std::string const& user)
{
  // Do nothing
}


//StateModeration
StateModeration::StateModeration() {}

void StateModeration::publish(Document* document, std::string const& user)
{
  std::cout << "Документ = " << document->getText() << std::endl;
  std::cout << "State : Moderation -> Published" << std::endl;

  document->setState(new StatePublished());
}

void StateModeration::abandon(Document* document, std::string const& user)
{
  std::cout << "Документ = " << document->getText() << std::endl;
  std::cout << "State : Moderation -> Draft" << std::endl;

  document->setState(new StateDraft());
}


//StatePublished
StatePublished::StatePublished() {}

void StatePublished::publish(Document* document, std::string const& user)
{
  // Do nothing
}

void StatePublished::abandon(Document* document, std::string const& user)
{
  std::cout << "Документ = " << document->getText() << std::endl;
  std::cout << "State : Published -> Draft" << std::endl;

  document->setState(new StateDraft());
}
