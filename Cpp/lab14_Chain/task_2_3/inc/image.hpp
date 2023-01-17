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
  Type getType() const;
  std::string getTypeString() const;
  void setType(Type);
  std::string getCamera() const;
  void setCamera(std::string);
  std::string getName() const;
  void setName(std::string);
  std::string getCreationDate() const;
  void setCreationDate(std::string);
  std::string getCreationTime() const;
  void setCreationTime(std::string);

  friend std::ostream& operator<<(std::ostream&, Image const&);

private:
  Type type;
  std::string camera;
  std::string creationDate;
  std::string creationTime;
  std::string name;
};
