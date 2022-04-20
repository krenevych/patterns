public class Lamp {

    final private String name;
    private boolean isLightOn;

    public Lamp(String name) {
        this.name = name;
        this.isLightOn = false;
    }

    public Lamp() {
        this("default");
    }

    public void lightOn() {
        if (isLightOn) {
            return;
        }
        System.out.println(name + ": Light is on");
        isLightOn = true;
    }

    public void lightOff() {
        if (!isLightOn) {
            return;
        }
        System.out.println(name + ": Light is off");
        isLightOn = false;
    }
}
