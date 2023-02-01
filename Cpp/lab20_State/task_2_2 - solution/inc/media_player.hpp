#pragma once
#include <string>

#include "states.hpp"


class MediaPlayer
{
public:
  ~MediaPlayer();
  void setState(State*);
  State* getState() const;
  void setIcon(std::string const&);
  std::string const& getIcon() const;
  void play();
  void pause();

private:
  State* state = new StatePause();
  std::string icon = "play button";
};
