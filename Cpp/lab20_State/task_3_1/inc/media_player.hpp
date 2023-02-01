#pragma once
#include <vector>
#include <string>

#include "states.hpp"


class MediaPlayer
{
private:
  std::vector<std::string> tracks;
  State* state = nullptr;
  size_t currentTrackNum = 0;

public:
  ~MediaPlayer();
  std::string const& getCurrentTrack() const;
  void setTrackNum(size_t);
  size_t getCurrentTrackNum() const;
  std::vector<std::string> const& getTracks() const;
  void addTrack(std::string const&);
  void setState(State*);
  State* getState();
  void play();
  void pause();
  void next();
  void prev();
  void stop();
};
