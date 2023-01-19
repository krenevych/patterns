#include "customer.hpp"
#include "driver.hpp"
#include "ecommerce_site.hpp"


int main()
{
  Customer customer{"123 Sunny Street"};
  customer.buy("pens", 3);

  return 0;
}
