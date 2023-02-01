#include <iostream>

#include "media_player.hpp"
#include "states.hpp"


//StatePause
StatePause::StatePause() {}

void StatePause::play(MediaPlayer* mediaPlayer)
{
  mediaPlayer->setState(new StatePlaying());
  mediaPlayer->setIcon("pause button");

  std::cout << "Video playing, icon set to " << mediaPlayer->getIcon() << std::endl;
}

void StatePause::pause(MediaPlayer* mediaPlayer)
{
  // Do nothing
}


//StatePlaying
StatePlaying::StatePlaying() {}

void StatePlaying::play(MediaPlayer* mediaPlayer)
{
  // Do nothing
}

void StatePlaying::pause(MediaPlayer* mediaPlayer)
{
  mediaPlayer->setState(new StatePause());
  mediaPlayer->setIcon("play button");

  std::cout << "Video paused, icon set to " << mediaPlayer->getIcon() << std::endl;
}
