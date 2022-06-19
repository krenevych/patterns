public class FordFactory extends CarFactory {
    @Override
    public Car create() {
        return new Ford();
    }
}
