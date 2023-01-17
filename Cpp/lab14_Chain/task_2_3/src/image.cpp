#include "image.hpp"


Image::Image() {}

Image::~Image() {}

void Image::setType(Image::Type type)
{
  this->type = type;
}

std::string Image::getCamera()
{
  return this->camera;
}

void Image::setCamera(std::string camera)
{
  this->camera = camera;
}

std::string Image::getName()
{
  return this->name;
}

void Image::setName(std::string name)
{
  this->name = name;
}

std::string Image::getCreationDate()
{
  return this->creationDate;
}

void Image::setCreationDate(std::string creationDate)
{
  this->creationTime = creationTime;
}

std::ostream& operator<<(std::ostream& os, Image const& image)
{
  os << "Image{type=";

  switch (image.type)
  {
    case Image::Type::bmp:
    {
      os << "bmp";
      break;
    }
    case Image::Type::png:
    {
      os << "png";
      break;
    }
    case Image::Type::jpg:
    {
      os << "jpg";
      break;
    }
  }

  os << ", camera=" << image.camera <<
        ", creationDate=" << image.creationDate <<
        ", creationTime=" << image.creationTime <<
        ", name=" << image.name <<
        "}";

  return os;
}
