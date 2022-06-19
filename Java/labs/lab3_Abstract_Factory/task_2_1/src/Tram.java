abstract public class Tram {
    protected Tram(int cost, int usagecost) {
        this.cost = cost;
        this.usagecost = usagecost;
    }

    public int getCost() {
        return cost;
    }

    public int getUsagecost() {
        return usagecost;
    }

    abstract public void goByRails();

    private final int cost;     // Вартість
    private final int usagecost;  //  Вартість експлуатації

}
