public class VWFactory extends CarFactory {
    @Override
    public Car create() {
        return new VW();
    }
}
