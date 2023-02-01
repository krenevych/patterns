#include "media_player.hpp"


MediaPlayer::~MediaPlayer()
{
  if (this->state != nullptr)
  {
    delete this->state;
    this->state = nullptr;
  }
}

std::string const& MediaPlayer::getCurrentTrack() const
{
  return this->tracks.at(this->currentTrackNum);
}

void MediaPlayer::setTrackNum(size_t trackNum)
{
  if (trackNum >= this->tracks.size())
  {
    return;
  }

  this->currentTrackNum = trackNum;
}

size_t MediaPlayer::getCurrentTrackNum() const
{
  return this->currentTrackNum;
}

std::vector<std::string> const& MediaPlayer::getTracks() const
{
  return this->tracks;
}

void MediaPlayer::addTrack(std::string const& track)
{
  this->tracks.push_back(track);
}

void MediaPlayer::setState(State* state)
{
  if (this->state != nullptr)
  {
    delete this->state;
  }

  this->state = state;
}

State* MediaPlayer::getState()
{
  return this->state;
}

void MediaPlayer::play()
{

}

void MediaPlayer::pause()
{

}

void MediaPlayer::next()
{

}

void MediaPlayer::prev()
{

}

void MediaPlayer::stop()
{

}
