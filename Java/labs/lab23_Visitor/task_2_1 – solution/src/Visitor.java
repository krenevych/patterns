public interface Visitor {
    void visit(Bread bread);
    void visit(Milk milk);
    void visit(GroceryList list);

    void visit(Coffee coffee);
}
