public class ConcreteVisitor implements Visitor {
    @Override
    public void visit(ElementA elementA) {
        elementA.featureA();
    }

    @Override
    public void visit(ElementB elementB) {
        elementB.featureB();
    }
}
