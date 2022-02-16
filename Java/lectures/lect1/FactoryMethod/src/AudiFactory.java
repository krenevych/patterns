public class AudiFactory extends CarFactory {
    @Override
    public Car create() {
        return new Audi();
    }
}
