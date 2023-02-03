#include "television.hpp"
#include "remote_controller.hpp"


int main()
{
  Device* tv = new Television();

  RemoteController controller;

  controller.deviceOn();

  for (int ind = 0; ind != 30; ++ind)
  {
      controller.deviceNextChanel();
  }

  controller.deviceVolumeUp();

  controller.deviceVolumeUp();
  controller.deviceVolumeUp();

  controller.devicePrevChanel();

  controller.deviceVolumeDown();

  controller.deviceOff();

  return 0;
}
