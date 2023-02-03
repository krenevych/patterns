#include <iostream>

#include "mobile_phones.hpp"
#include "type_cchargers.hpp"
#include "micro_usb_chargers.hpp"
#include "adapters.hpp"


void printBatteryStatus(MobilePhone const& phone)
{
  std::cout << "Current battery status = " << phone.getChargingPercent() << std::endl;
}


int main()
{
  using namespace std;

  SamsungS22 samsungS22;
  samsungS22.makeCall();

  FastCharge fastCharge(18);

  samsungS22.pluginCharger(&fastCharge);
  samsungS22.charge(30);
  printBatteryStatus(samsungS22);
  samsungS22.makeCall();
  printBatteryStatus(samsungS22);
  samsungS22.unplugCharger();
  samsungS22.charge(10);
  printBatteryStatus(samsungS22);

  Charger charger = Charger(5.0f, 1.0f);
  AdapterMicroUsbToTypeC adapterMicroUsbToTypeC(&charger);

  cout << "Charging throughout first adapter" << endl;
  samsungS22.pluginCharger(&adapterMicroUsbToTypeC);
  samsungS22.charge(10);
  printBatteryStatus(samsungS22);

  cout << "Maintaining legacy charging" << endl;

  SamsungS7 samsungS7;
  AdapterTypeCToMicroUsb adapterTypeCToMicroUsb(&fastCharge);
  samsungS7.pluginCharger(&charger);
  samsungS7.charge(20);
  printBatteryStatus(samsungS7);

  samsungS7.pluginCharger(&adapterTypeCToMicroUsb);
  samsungS7.charge(20);
  printBatteryStatus(samsungS7);

  return 0;
}
