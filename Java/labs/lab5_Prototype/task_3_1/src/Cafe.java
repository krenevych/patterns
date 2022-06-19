public class Cafe {

    public static void main(String[] args) {
        BlackChocolate blackChocolate = new BlackChocolate(3, 200);
        BlackCoffee blackCoffee = new BlackCoffee(3, 200, true);
        BlackTee blackTee = new BlackTee(0, 300);

        beverageInfo(blackChocolate);
        beverageInfo(blackCoffee);
        beverageInfo(blackTee);

        MilkChocolate milkChocolate = new MilkChocolate(3, 200);
        CoffeeWithMilk coffeeWithMilk = new CoffeeWithMilk(3, 200);
        TeeWithMilk teeWithMilk = new TeeWithMilk(2, 300);

        beverageInfo(milkChocolate);
        beverageInfo(coffeeWithMilk);
        beverageInfo(teeWithMilk);
    }

    private static void beverageInfo(Beverage beverage) {

        System.out.println("=========================");

        beverage.prepare();
        System.out.printf("Cost of beverage: %s grn\n",  beverage.cost());
        beverage.drink();
    }

}
