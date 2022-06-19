public class ElementB implements Element {
    void featureB(){
        System.out.println("ElementB: featureB");
    }

    @Override
    public void accept(Visitor visitor) {
        visitor.visit(this);
    }
}
