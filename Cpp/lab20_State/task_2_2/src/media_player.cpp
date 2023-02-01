#include <iostream>

#include "media_player.hpp"


void MediaPlayer::setState(MediaPlayer::State state)
{
  this->state = state;
}

MediaPlayer::State MediaPlayer::getState() const
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
  switch (this->state)
  {
    case MediaPlayer::State::Paused:
    {
      this->setState(MediaPlayer::State::Playing);
      this->setIcon("pause button");

      std::cout << "Video playing, icon set to " << this->getIcon() << std::endl;
      break;
    }
    case MediaPlayer::State::Playing:
    {
      break;
    }
  }
}

void MediaPlayer::pause()
{
  switch (this->state)
  {
    case MediaPlayer::State::Paused:
    {
      break;
    }
    case MediaPlayer::State::Playing:
    {
      this->setState(MediaPlayer::State::Paused);
      this->setIcon("play button");

      std::cout << "Video paused, icon set to " << this->getIcon() << std::endl;
      break;
    }
  }
}
