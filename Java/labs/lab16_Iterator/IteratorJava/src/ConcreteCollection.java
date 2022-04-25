import java.util.Iterator;

public class ConcreteCollection implements Iterable<Element> {

    private final Element[] elements;

    public ConcreteCollection(Element... elements) {
        this.elements = elements;
    }

    public Element[] getElements() {
        return elements;
    }

    @Override
    public Iterator<Element> iterator() {
        return new ConcreteIterator(this);
    }
}
