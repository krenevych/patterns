
public class DroneAdapterInheritance extends SuperDrone implements Duck {

    @Override
    public void fly() {
        take_off();
        spin_rotors();
    }

    @Override
    public void quack() {
        beep();
        beep();
        beep();
    }
}


