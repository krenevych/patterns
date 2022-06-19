public class VolvoTram extends Tram {
    protected VolvoTram() {
        super(10_000_000, 7);
    }

    @Override
    public void goByRails() {
        System.out.println("Volvo Tram goes!");
    }
}
