
public class DuckSimulator {

    public static void main(String[] args) {
        DuckSimulator simulator = new DuckSimulator();
        simulator.testDuck(new DroneAdapter(new SuperDrone()));
        simulator.testDuck(new DroneAdapterInheritance());
    }

    public void testDuck(Duck duck){
        duck.fly();
        duck.quack();
    }
}
