package com.company;

public class DroneAdapter implements Duck {

    private final SuperDrone drone;

    public DroneAdapter(SuperDrone drone) {
        this.drone = drone;
    }

    @Override
    public void fly() {
        drone.take_off();
        drone.spin_rotors();
    }

    @Override
    public void quack() {
        drone.beep();
        drone.beep();
        drone.beep();
    }
}
