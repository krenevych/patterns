
import java.util.ArrayList;
import java.util.Iterator;

public class IntegerIterator implements Iterator<Integer> {

    final private ArrayList<Integer> collectionIntegers  = new ArrayList<>();
    private int index = 0;

    public IntegerIterator(CollectionIntegers collection) {
        collectionIntegers.addAll(collection.getArray());
        collectionIntegers.sort(Integer::compareTo);
    }

    @Override
    public boolean hasNext() {
        return index < collectionIntegers.size();
    }

    @Override
    public Integer next() {
        return collectionIntegers.get(index++);
    }
}
