public class ProductB extends Product{
    public ProductB(int id) {
        super(id);
    }

    @Override
    public void showInfo() {
        System.out.println("showInfo : ProductB: " + id() + ", this: " + this);

    }
}
