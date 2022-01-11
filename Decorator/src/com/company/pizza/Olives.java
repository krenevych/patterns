package com.company.pizza;

public class Olives extends Toppings {
    public Olives(Pizza pizza) {
        super(pizza);
    }

    @Override
    public String description() {
        return pizza.description() + " + Olives";
    }

    @Override
    public float cost() {
        return pizza.cost() + 0.25f;
    }
}
