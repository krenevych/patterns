public class Client {
    public static void main(String[] args) {

        Lamp kitchenLamp = new Lamp("Kitchen");
        Lamp hallLamp = new Lamp("Hall");
        Lamp bedroomLamp = new Lamp("Bedroom");
        Lamp bathroomLamp = new Lamp("Bathroom");

        Controller controllerKitchenLamp = new Controller();
        controllerKitchenLamp.setCommandOn(hallLamp::lightOn);
        controllerKitchenLamp.setCommandOff(hallLamp::lightOff);

        Controller controllerHallLamp = new Controller();
        controllerHallLamp.setCommandOn(kitchenLamp::lightOn);
        controllerHallLamp.setCommandOff(kitchenLamp::lightOff);

        Controller controllerBedroomLamp = new Controller();
        controllerBedroomLamp.setCommandOn(bedroomLamp::lightOn);
        controllerBedroomLamp.setCommandOff(bedroomLamp::lightOff);

        Controller controllerBathroomLamp = new Controller();
        controllerBathroomLamp.setCommandOn(bathroomLamp::lightOn);
        controllerBathroomLamp.setCommandOff(bathroomLamp::lightOff);


        Controller controllerUniversal = new Controller();
        controllerUniversal.setCommandOff(new Command() {
            @Override
            public void execute() {
                kitchenLamp.lightOff();
                hallLamp.lightOff();
                bedroomLamp.lightOff();
                bathroomLamp.lightOff();
            }
        });

        // Simulation
        controllerKitchenLamp.on();
        controllerHallLamp.on();
        controllerBedroomLamp.on();

        controllerKitchenLamp.off();
        controllerHallLamp.off();
        controllerBedroomLamp.off();

        controllerBedroomLamp.on();
        controllerBathroomLamp.on();

        controllerUniversal.off();

    }
}
