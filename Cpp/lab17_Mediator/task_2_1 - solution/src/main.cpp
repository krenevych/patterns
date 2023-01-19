#include "customer.hpp"
#include "driver.hpp"
#include "ecommerce_site.hpp"
#include "mediator.hpp"


int main()
{
  Customer customer{"123 Sunny Street"};
  ECommerceSite site{};
  Driver driver{};

  Mediator mediator;

  mediator.setCustomer(customer);
  mediator.setSite(site);
  mediator.setDriver(driver);

  mediator.buy("pens", 3);

  return 0;
}
