import java.util.Iterator;

public class ConcreteIterator implements Iterator<Element> {

    private final ConcreteCollection elements;
    private int currentPosition;

    public ConcreteIterator(ConcreteCollection elements) {
        this.elements = elements;
        currentPosition = 0;
    }


    @Override
    public boolean hasNext() {
        return currentPosition < elements.getElements().length;
    }

    @Override
    public Element next() {
        if (!hasNext())
            return null;

        return elements.getElements()[currentPosition++];
    }
}
