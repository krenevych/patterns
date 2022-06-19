public class VolvoTrolley extends Trolleybus{
    protected VolvoTrolley() {
        super(7_000_000, 13);
    }

    @Override
    public void goByContactNetwork() {
        System.out.println("Volvo trolleybus rus");
    }
}
