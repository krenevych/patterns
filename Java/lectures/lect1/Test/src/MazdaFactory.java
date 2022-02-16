public class MazdaFactory extends CarFactory {
    @Override
    public Car create() {
        return new Mazda();
    }
}
