public class Customer {

  private final String address;
  private final ECommerceSite site;

  public Customer(String address) {
    this.address = address;
    site = new ECommerceSite(this);
  }

  public String getAddress() {
    return address;
  }

  public void buy(String item, int quantity) {
    if(site.checkInStock(item, quantity)) {
      site.sell(item, quantity);
    }
  }

}
