#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

#include "handlers.hpp"


//PropertyHandler
PropertyHandler::PropertyHandler() {}

void PropertyHandler::setProperty(Image& image)
{
  if (this->next != nullptr)
  {
    this->next->setProperty(image);
  }
}

void PropertyHandler::setNext(Handler* handler)
{
  this->next = handler;
}

//PropertyHandlerCamera
PropertyHandlerCamera::PropertyHandlerCamera(std::string const& cameraName)
: cameraName(cameraName) {}

void PropertyHandlerCamera::setProperty(Image& image)
{
  image.setCamera(this->cameraName);
  this->PropertyHandler::setProperty(image);
}

//PropertyHandlerDateTime
PropertyHandlerDateTime::PropertyHandlerDateTime() {}

void PropertyHandlerDateTime::setProperty(Image& image)
{
  boost::posix_time::ptime timeLocal = boost::posix_time::second_clock::local_time();

  boost::posix_time::time_duration durObj = timeLocal.time_of_day();
  std::string time = boost::posix_time::to_simple_string(durObj);
  image.setCreationTime(time);

  boost::gregorian::date dateObj = timeLocal.date();
  std::string date = boost::gregorian::to_iso_extended_string(dateObj);
  image.setCreationDate(date);

  this->PropertyHandler::setProperty(image);
}

//PropertyHandlerName
PropertyHandlerName::PropertyHandlerName() {}

void PropertyHandlerName::setProperty(Image& image)
{
  std::string creationDate = image.getCreationDate();
  std::string creationTime = image.getCreationTime();
  std::string type = image.getTypeString();

  std::string name = "IMG_" + creationDate + "_" + creationTime + "." + type;
  image.setName(name);

  this->PropertyHandler::setProperty(image);
}

//PropertyHandlerType
PropertyHandlerType::PropertyHandlerType(Image::Type const type)
: type(type) {}

void PropertyHandlerType::setProperty(Image& image)
{
  image.setType(type);

  this->PropertyHandler::setProperty(image);
}
