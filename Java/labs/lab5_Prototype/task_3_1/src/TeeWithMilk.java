public class TeeWithMilk extends Tee {

    private final int milkVolume;

    public TeeWithMilk(int sugar, int milkVolume) {
        super(sugar);
        this.milkVolume = milkVolume;
    }

    @Override
    public void drink() {
        System.out.println("Drink tee with milk!");
    }

    @Override
    public void prepare() {
        super.prepare();
        System.out.printf("Put some milk : %s ml...%n", milkVolume);
        if (sugar > 0) System.out.printf("Put some sugar: %s pieces ...%n", sugar);
    }

    @Override
    public int cost() {
        return super.cost() + (int) (milkVolume / 20.0);
    }
}
