package com.company;

import java.util.Iterator;

public class MyIterator implements Iterator<Integer> {

    final private Iterable iterable;
    private int index = 0;

    public MyIterator(Iterable iterable) {
        this.iterable = iterable;
    }

    @Override
    public boolean hasNext() {
        return index < iterable.size();
    }

    @Override
    public Integer next() {
        return iterable.get(index++);
    }
}
