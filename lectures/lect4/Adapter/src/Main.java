import com.mobile.Legacy.Charger;
import com.mobile.Legacy.MobilePhone;

public class Main {

    public static void main(String[] args) {
        SamsungS22 samsungS22 = new SamsungS22();
        samsungS22.makeCall();

        FastCharge fastCharge = new FastCharge(18);

        samsungS22.pluginCharger(fastCharge);
        samsungS22.charge(30);
        printBatteryStatus(samsungS22);
        samsungS22.makeCall();
        printBatteryStatus(samsungS22);
        samsungS22.unplugCharger();
        samsungS22.charge(10);
        printBatteryStatus(samsungS22);

        Charger charger = new Charger(5.0f, 1.0f);
        AdapterMicroUsbToTypeC adapterMicroUsbToTypeC = new AdapterMicroUsbToTypeC(charger);

        System.out.println("Charging throughout first adapter");
        samsungS22.pluginCharger(adapterMicroUsbToTypeC);
        samsungS22.charge(10);
        printBatteryStatus(samsungS22);

        System.out.println("Maintaining legacy charging");

        MobilePhone phone = new MobilePhone();
        phone.pluginCharger(charger);
        phone.charge(20);
        System.out.printf("Current power status = %s%n", phone.getChargingPercent());

        phone.pluginCharger(new AdapterTypeCToMicroUsb(fastCharge));
        phone.charge(20);
        System.out.printf("Current power status = %s%n", phone.getChargingPercent());

    }

    private static void printBatteryStatus(SamsungS22 phone){
        System.out.printf("Current battery status = %s%n", phone.getChargingPercent());
    }

}
