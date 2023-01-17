#pragma once
#include <string>
#include <iostream>


class Image
{
public:
  enum class Type
  {
    bmp,
    png,
    jpg,
  };

  Image();
  ~Image();
  Type getType();
  void setType(Type);
  std::string getCamera();
  void setCamera(std::string);
  std::string getName();
  void setName(std::string);
  std::string getCreationDate();
  void setCreationDate(std::string);
  std::string getCreationTime();
  void setCreationTime(std::string);

  friend std::ostream& operator<<(std::ostream&, Image const&);

private:
  Type type;
  std::string camera;
  std::string creationDate;
  std::string creationTime;
  std::string name;
};
