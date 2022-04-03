abstract public class Pizza {
    public abstract String description();
    public abstract float cost();

    @Override
    public String toString() {
        return "Pizza: " + description() + ", $" + cost();
    }
}
