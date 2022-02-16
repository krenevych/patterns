public class ProductA extends Product{
    public ProductA(int id) {
        super(id);
    }

    @Override
    public void showInfo() {
        System.out.println("showInfo : ProductA: " + id() + ", this: " + this);
    }
}
