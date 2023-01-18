#include <cstddef>

#include "television.hpp"
#include "remote_controller.hpp"


int main()
{
  Device* tv = new Television();

  RemoteController controller = RemoteController();

  controller.deviceOn();

  for (size_t ind = 0; ind != 30; ++ind)
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
