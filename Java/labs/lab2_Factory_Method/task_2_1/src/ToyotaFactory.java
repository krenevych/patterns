public class ToyotaFactory extends CarFactory{
    @Override
    public Car create() {
        return new Toyota();
    }
}
