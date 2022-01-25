public class Late extends Coffee {

    private final boolean cinnamon;

    public Late(int price, int volume, String coffee, int sugar, boolean cinnamon) {
        super(price, volume, coffee, sugar, true);
        this.cinnamon = cinnamon;
    }

    public Late(Coffee other, boolean cinnamon) {
        super(other);
        this.cinnamon = cinnamon;
    }

    @Override
    public String toString() {
        return super.toString() + "Late{" +
                "cinnamon=" + cinnamon +
                '}';
    }

    @Override
    public Object clone() {
        return new Late(this, cinnamon);
    }
}
