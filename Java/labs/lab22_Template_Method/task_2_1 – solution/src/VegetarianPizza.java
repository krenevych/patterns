public class VegetarianPizza extends Pizza {

  @Override
  public void cook() {
    System.out.println("Cook in the oven for 15 minutes");
  }

  public void addToppings() {
    super.addToppings();
    System.out.println("Add peppers");
    System.out.println("Add olives");
  }






}
