public class SkodaTram extends Tram{
    protected SkodaTram() {
        super(9_000_000, 8);
    }

    @Override
    public void goByRails() {
        System.out.println("Skoda Tram goes!");
    }
}
