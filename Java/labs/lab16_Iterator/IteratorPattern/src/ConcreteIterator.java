public class ConcreteIterator implements Iterator{
    final private CollectionElements elements;
    private int marker;
    public ConcreteIterator(CollectionElements elements) {
        this.elements = elements;
        marker = 0;
    }

    @Override
    public Element getNext() {
        return elements.getElements()[marker++];
    }

    @Override
    public boolean hasMore() {
        return marker < elements.getElements().length;
    }
}
