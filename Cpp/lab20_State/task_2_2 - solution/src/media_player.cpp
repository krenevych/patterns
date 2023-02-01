#include <iostream>

#include "media_player.hpp"


void MediaPlayer::setState(State* state)
{
  this->state = state;
}

State* MediaPlayer::getState() const
{
  return this->state;
}

void MediaPlayer::setIcon(std::string const& icon)
{
  this->icon = icon;
}

std::string const& MediaPlayer::getIcon() const
{
  return this->icon;
}

void MediaPlayer::play()
{
  this->state->play(this);
}

void MediaPlayer::pause()
{
  this->state->pause(this);
}
