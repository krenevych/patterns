#pragma once


class RemoteController
{
public:
  RemoteController();
  ~RemoteController();
  void deviceOn();
  void deviceOff();
  void deviceVolumeUp();
  void deviceVolumeDown();
  void deviceNextChanel();
  void devicePrevChanel();
};
