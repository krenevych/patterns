abstract public class Bus {
    protected Bus(int cost, int usagecost) {
        this.cost = cost;
        this.usagecost = usagecost;
    }

    public int getCost() {
        return cost;
    }

    public int getUsagecost() {
        return usagecost;
    }

    abstract public void goByWay();

    private final int cost;     // Вартість
    private final int usagecost;  //  Вартість експлуатації

}
