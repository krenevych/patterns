public class Salesperson {

  private final String name;

  private final Manager manager;

  public Salesperson(String name, Manager manager) {
    this.name = name;
    this.manager = manager;
  }

  public void payExpenses(int amount) {
    System.out.println(name + " has been paid $" + amount);
  }

}
