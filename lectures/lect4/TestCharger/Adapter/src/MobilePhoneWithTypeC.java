public class MobilePhoneWithTypeC {

    private int percentCharging = 0;
    private TypeCCharger charger;

    public int getPercentCharging() {
        return percentCharging;
    }

    public void plugin(TypeCCharger charger){
        this.charger = charger;
    };

    public void charge(int minutes){
        if (charger == null){
            System.out.println("Підключіть зарядний пристрій");
            return;
        }

        float power = charger.getOutputPower();
        percentCharging += (int) (power * minutes / 9.0f);
        if (percentCharging > 100){
            percentCharging = 100;
        }

    }

    public void unplug(){
        this.charger = null;
    }

    public void call(int minutes) {

        int predictedPowerConsumption = minutes / 5;

        if (percentCharging < predictedPowerConsumption){
            System.out.println("Заряду не достатньо для здійснення дзвінка!");
            return;
        }
        System.out.println("Calling...");
        percentCharging -= predictedPowerConsumption;
    }

}
