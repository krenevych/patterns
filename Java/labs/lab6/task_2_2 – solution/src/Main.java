public class Main {

    public static void main(String[] args) {

        Pizza pizza = new ThickCrustPizza();
        pizza = new Cheese(pizza);
        pizza = new Peppers(pizza);
        pizza = new Cheese(pizza);
        pizza = new Peppers(pizza);
        pizza = new Olives(pizza);
        System.out.println(pizza);

    }
}
