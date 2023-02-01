#include <iostream>

#include "customer.hpp"


void Customer::makeBankAccountPayment(int amount)
{
  std::cout << "Payment of $" << amount << " made from bank account." << std::endl;
}

void Customer::makePayPalPayment(int amount)
{
  std::cout << "Payment of $" << amount << " made from PayPal." << std::endl;
}
