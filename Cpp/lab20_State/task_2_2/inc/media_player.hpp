#pragma once
#include <string>


class MediaPlayer
{
public:
  enum class State
  {
    Paused,
    Playing
  };

  void setState(State);
  State getState() const;
  void setIcon(std::string const&);
  std::string const& getIcon() const;
  void play();
  void pause();

private:
  State state = MediaPlayer::State::Paused;
  std::string icon = "play button";
};
