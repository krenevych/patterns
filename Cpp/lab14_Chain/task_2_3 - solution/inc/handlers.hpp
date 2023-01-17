#pragma once
#include "image.hpp"


class Handler
{
public:
  virtual void setProperty(Image&) = 0;
  virtual void setNext(Handler*) = 0;
};


class PropertyHandler: public Handler
{
public:
  PropertyHandler();
  ~PropertyHandler();
  virtual void setProperty(Image&);
  void setNext(Handler*);

protected:
  Handler* next;
};


class PropertyHandlerCamera: public PropertyHandler
{
public:
  PropertyHandlerCamera(std::string const&);
  ~PropertyHandlerCamera();
  void setProperty(Image&) override;

private:
  std::string const cameraName;
};


class PropertyHandlerDateTime: public PropertyHandler
{
public:
  PropertyHandlerDateTime();
  ~PropertyHandlerDateTime();
  void setProperty(Image&) override;
};


class PropertyHandlerName: public PropertyHandler
{
public:
  PropertyHandlerName();
  ~PropertyHandlerName();
  void setProperty(Image&) override;
};


class PropertyHandlerType: public PropertyHandler
{
public:
  PropertyHandlerType(Image::Type const);
  ~PropertyHandlerType();
  void setProperty(Image&) override;

private:
  Image::Type const type;
};
