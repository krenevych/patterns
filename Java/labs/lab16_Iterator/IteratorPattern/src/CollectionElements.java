public class CollectionElements implements IterableCollection{

    final Element[] elements;

    public Element[] getElements() {
        return elements;
    }

    public CollectionElements(Element... elements) {
        this.elements = elements;
    }

    @Override
    public Iterator createIterator() {
        return new ConcreteIterator(this);
    }
}
