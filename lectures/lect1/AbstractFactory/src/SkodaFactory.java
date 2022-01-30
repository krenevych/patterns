public class SkodaFactory implements TransportFactory {
    @Override
    public Bus createBus() {
        return new SkodaBus();
    }

    @Override
    public Tram createTram() {
        return new SkodaTram();
    }

    @Override
    public Trolleybus createTrolleybus() {
        return new SkodaTrolleybus();
    }
}
