public class VolvoFactory implements TransportFactory {
    @Override
    public Bus createBus() {
        return new VolvoBus();
    }

    @Override
    public Tram createTram() {
        return new VolvoTram();
    }

    @Override
    public Trolleybus createTrolley() {
        return new VolvoTrolley();
    }
}
