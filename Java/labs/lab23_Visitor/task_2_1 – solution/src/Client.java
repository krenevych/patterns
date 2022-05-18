public class Client {

    public static void main(String[] args) {
        GroceryList groceryList = new GroceryList();
        groceryList.add(new Bread());
        groceryList.add(new Bread());
        groceryList.add(new Milk());

        Coffee coffee = new Coffee();
        groceryList.add(coffee);

        System.out.println("Total price of grocery list: " + groceryList.getPrice());

        groceryList.accept(new DiscountVisitor(0.8f));
        System.out.println("Total price of grocery list: " + groceryList.getPrice());
        System.out.println(coffee.getPrice());

        groceryList.accept(new IncreasingPriceVisitor());
        System.out.println("Total price of grocery list: " + groceryList.getPrice());
        System.out.println(coffee.getPrice());
    }

}
