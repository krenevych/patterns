public class MeatFeastPizza extends Pizza{

  @Override
  public void cook() {
    System.out.println("Cook in the oven for 20 minutes");
  }

  public void addToppings() {
    super.addToppings();
    System.out.println("Add pepperoni");
    System.out.println("Add ham");
    System.out.println("Add chicken");
  }

}
