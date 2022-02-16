public abstract class Product {

    final private int mId;
    public Product(int id) {
        mId = id;
    }

    public abstract void showInfo();

    public int id() {
        return mId;
    }
}
