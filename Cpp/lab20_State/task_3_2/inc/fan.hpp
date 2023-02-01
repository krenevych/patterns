#pragma once


class Fan
{
public:
  enum class State
  {
    Low,
    Medium,
    High
  };

  void setState(State);
  State getState() const;
  void turnUp();
  void turnDown();

private:
  State state = State::Low;
};
