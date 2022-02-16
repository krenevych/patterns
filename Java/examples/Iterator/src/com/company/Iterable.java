package com.company;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class Iterable implements java.lang.Iterable<Integer> {

    private final List<Integer> array = new ArrayList<>();

    public void add(int i) {
        array.add(i);
    }


    @Override
    public String toString() {
        return "Iterable{" +
                "array=" + array +
                '}';
    }

    public int size() {
        return array.size();
    }

    public Integer get(int i) {
        return array.get(i);
    }

    @Override
    public Iterator<Integer> iterator() {
        return new MyIterator(this);
    }

//    @Override
//    public void forEach(Consumer<? super Integer> action) {
//        java.lang.Iterable.super.forEach(action);
//    }f

}
