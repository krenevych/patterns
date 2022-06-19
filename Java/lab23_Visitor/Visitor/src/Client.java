public class Client {

    public static void main(String[] args) {
        ElementA elementA = new ElementA();

        ElementB elementB = new ElementB();

        ConcreteVisitor concreteVisitor = new ConcreteVisitor();

        elementA.accept(concreteVisitor);
        elementB.accept(concreteVisitor);
    }

}
