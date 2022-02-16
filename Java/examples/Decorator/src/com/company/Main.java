package com.company;

import com.company.beverage.*;
import com.company.pizza.*;

public class Main {

    public static void main(String[] args) {

//        Beverage espresso = new Espresso();
//        espresso = new Milk(espresso);
//        espresso = new Milk(espresso);
//        espresso = new Mocha(espresso);
//        System.out.println(espresso);
//
//
//        Beverage darkRoast = new DarkRoast();
//        darkRoast = new Whip(darkRoast);
//        System.out.println(darkRoast);

        Pizza pizza = new ThickCrustPizza();
        pizza = new Cheese(pizza);
        pizza = new Peppers(pizza);
        pizza = new Cheese(pizza);
        pizza = new Peppers(pizza);
        pizza = new Olives(pizza);
        System.out.println(pizza);

    }
}
