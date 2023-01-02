#include <iostream>

#include "mobile_phones.h"
#include "type_cchargers.h"
#include "micro_usb_chargers.h"
#include "adapters.h"


void printBatteryStatus(MobilePhone& phone)
{
  std::cout << "Current battery status = " << phone.getChargingPercent() << std::endl;
}


int main()
{
  SamsungS22 samsungS22 = SamsungS22();
  samsungS22.makeCall();

  FastCharge fastCharge = FastCharge(18);

  samsungS22.pluginCharger(&fastCharge);
  samsungS22.charge(30);
  printBatteryStatus(samsungS22);
  samsungS22.makeCall();
  printBatteryStatus(samsungS22);
  samsungS22.unplugCharger();
  samsungS22.charge(10);
  printBatteryStatus(samsungS22);

  Charger charger = Charger(5.0f, 1.0f);
  AdapterMicroUsbToTypeC adapterMicroUsbToTypeC = AdapterMicroUsbToTypeC(&charger);

  std::cout << "Charging throughout first adapter" << std::endl;
  samsungS22.pluginCharger(&adapterMicroUsbToTypeC);
  samsungS22.charge(10);
  printBatteryStatus(samsungS22);

  std::cout << "Maintaining legacy charging" << std::endl;

  SamsungS7 samsungS7 = SamsungS7();
  samsungS7.pluginCharger(&charger);
  samsungS7.charge(20);
  printBatteryStatus(samsungS7);

  samsungS7.pluginCharger(new AdapterTypeCToMicroUsb(&fastCharge));
  samsungS7.charge(20);
  printBatteryStatus(samsungS7);

  return 0;
}
