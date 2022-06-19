public class TVSimulator {
    public static void main(String[] args) {

        Device tv = new Television();

        RemoteController controller = new RemoteController();

        controller.deviceOn();

        for (int i = 0; i < 30; i++) {
            controller.deviceNextChanel();
        }
        controller.deviceVolumeUp();

        controller.deviceVolumeUp();
        controller.deviceVolumeUp();

        controller.devicePrevChanel();

        controller.deviceVolumeDown();

        controller.deviceOff();

    }
}
