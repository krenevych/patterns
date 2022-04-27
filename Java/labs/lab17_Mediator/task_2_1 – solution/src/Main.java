public class Main {

  public static void main(String[] args) {

    Customer customer = new Customer("123 Sunny Street");
    ECommerceSite site = new ECommerceSite();
    Driver driver = new Driver();

    Mediator mediator = new Mediator();

    mediator.setCustomer(customer);
    mediator.setSite(site);
    mediator.setDriver(driver);

    mediator.buy("pens", 3);

  }


}
