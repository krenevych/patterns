public class Client {
    public static void main(String[] args) {

        Lamp lamp = new Lamp();

        Controller controller = new Controller();

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
