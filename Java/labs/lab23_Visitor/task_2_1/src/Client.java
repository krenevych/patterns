public class Client {

    public static void main(String[] args) {
        GroceryList groceryList = new GroceryList();
        groceryList.add(new Bread());
        groceryList.add(new Bread());
        groceryList.add(new Milk());

        System.out.println("Total price of grocery list: " + groceryList.getPrice());
    }

}
