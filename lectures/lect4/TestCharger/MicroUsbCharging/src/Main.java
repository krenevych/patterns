public class Main {
    public static void main(String[] args) {
        MobilePhone mobilePhone = new MobilePhone();
        System.out.println(String.format("Рівень заряду: %s%%", mobilePhone.getPercentCharging()));
        mobilePhone.call(10);
        mobilePhone.pluginCharger(new Charger(5.0f, 1.0f));
        mobilePhone.charge(180);
        System.out.println(String.format("Рівень заряду: %s%%", mobilePhone.getPercentCharging()));
        mobilePhone.call(10);
        System.out.println(String.format("Рівень заряду: %s%%", mobilePhone.getPercentCharging()));

    }
}
