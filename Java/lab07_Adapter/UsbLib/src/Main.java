import com.mobile.Legacy.Charger;
import com.mobile.Legacy.MobilePhone;

public class Main {
    public static void main(String[] args) {

        MobilePhone mobilePhone = new MobilePhone();
        mobilePhone.pluginCharger(new Charger(5.0f, 1.0f));
        mobilePhone.charge(20);
        System.out.printf("Current power status = %s%n", mobilePhone.getChargingPercent());
        mobilePhone.call(10);

    }
}
