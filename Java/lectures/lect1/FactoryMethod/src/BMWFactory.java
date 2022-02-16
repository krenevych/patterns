public class BMWFactory extends CarFactory {
    @Override
    public Car create() {
        return new BMW();
    }
}
