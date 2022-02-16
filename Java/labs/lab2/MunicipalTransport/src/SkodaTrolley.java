public class SkodaTrolley extends Trolleybus{
    protected SkodaTrolley() {
        super(6_800_000, 13);
    }

    @Override
    public void goByContactNetwork() {
        System.out.println("Skoda trolleybus rus");
    }
}
