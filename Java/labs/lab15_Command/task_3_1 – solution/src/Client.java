public class Client {
    public static void main(String[] args) {

        Lamp lamp = new Lamp();

        Controller controller = new Controller();

        Command commandOn = new Command() {
            @Override
            public void execute() {
                lamp.lightOn();
            }
        };

        Command commandOff = new Command() {
            @Override
            public void execute() {
                lamp.lightOff();
            }
        };

        controller.setCommandOn(commandOn);
        controller.setCommandOff(commandOff);

        // Simulation
        controller.on();
        controller.on();
        controller.off();
        controller.off();
        controller.on();
        controller.on();
        controller.off();

    }
}
