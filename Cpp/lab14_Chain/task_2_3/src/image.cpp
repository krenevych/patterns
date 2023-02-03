#include "image.hpp"


Image::Image() {}

Image::Type Image::getType() const
{
  return this->type;
}

std::string Image::getTypeString() const
{
  std::string type_str;

  switch (this->type)
  {
    case Image::Type::bmp:
    {
      type_str = "bmp";
      break;
    }
    case Image::Type::png:
    {
      type_str = "png";
      break;
    }
    case Image::Type::jpg:
    {
      type_str = "jpg";
      break;
    }
  }

  return type_str;
}

void Image::setType(Image::Type type)
{
  this->type = type;
}

std::string const& Image::getCamera() const
{
  return this->camera;
}

void Image::setCamera(std::string const& camera)
{
  this->camera = camera;
}

std::string const& Image::getName() const
{
  return this->name;
}

void Image::setName(std::string const& name)
{
  this->name = name;
}

std::string const& Image::getCreationDate() const
{
  return this->creationDate;
}

void Image::setCreationDate(std::string const& creationDate)
{
  this->creationDate = creationDate;
}

std::string const& Image::getCreationTime() const
{
  return this->creationTime;
}

void Image::setCreationTime(std::string const& creationTime)
{
  this->creationTime = creationTime;
}

std::ostream& operator<<(std::ostream& os, Image const& image)
{
  os << "Image{type=" << image.getTypeString() <<
        ", camera=" << image.camera <<
        ", creationDate=" << image.creationDate <<
        ", creationTime=" << image.creationTime <<
        ", name=" << image.name <<
        "}";

  return os;
}
