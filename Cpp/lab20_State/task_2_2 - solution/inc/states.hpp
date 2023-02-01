#pragma once


class MediaPlayer;


class State
{
public:
  virtual void play(MediaPlayer*) = 0;
  virtual void pause(MediaPlayer*) = 0;
};


class StatePause: public State
{
public:
  StatePause();
  void play(MediaPlayer*);
  void pause(MediaPlayer*);
};


class StatePlaying: public State
{
public:
  StatePlaying();
  void play(MediaPlayer*);
  void pause(MediaPlayer*);
};
