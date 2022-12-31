#pragma once


class Cloneable
{
  virtual Cloneable* clone() const = 0;
};
