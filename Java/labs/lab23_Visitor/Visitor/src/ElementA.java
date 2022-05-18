public class ElementA implements Element{
    void featureA(){
        System.out.println("ElementA: featureA");
    }

    @Override
    public void accept(Visitor visitor) {
        visitor.visit(this);
    }
}
