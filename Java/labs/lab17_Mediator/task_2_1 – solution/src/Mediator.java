public class Mediator {

    private ECommerceSite site;
    private Customer customer;
    private Driver driver;

    public void setSite(ECommerceSite site) {
        this.site = site;
    }

    public void setCustomer(Customer customer) {
        this.customer = customer;
    }

    public void setDriver(Driver driver) {
        this.driver = driver;
    }

    //    site = new ECommerceSite(this);
    public void buy(String item, int quantity) {
        if (site.checkInStock(item, quantity)) {
            site.sell(item, quantity);
            driver.deliver(item, quantity, customer);
        }
    }
}
