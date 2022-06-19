public class Main {

    public static void main(String[] args) {

        Beverage espresso = new Espresso();
        espresso = new Milk(espresso);
        espresso = new Milk(espresso);
        espresso = new Mocha(espresso);
        System.out.println(espresso);


        Beverage darkRoast = new DarkRoast();
        darkRoast = new Whip(darkRoast);
        System.out.println(darkRoast);
    }
}
