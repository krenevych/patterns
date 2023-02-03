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
  Type getType() const;
  std::string getTypeString() const;
  void setType(Type);
  std::string const& getCamera() const;
  void setCamera(std::string const&);
  std::string const& getName() const;
  void setName(std::string const&);
  std::string const& getCreationDate() const;
  void setCreationDate(std::string const&);
  std::string const& getCreationTime() const;
  void setCreationTime(std::string const&);

  friend std::ostream& operator<<(std::ostream&, Image const&);

private:
  Type type;
  std::string camera;
  std::string creationDate;
  std::string creationTime;
  std::string name;
};
