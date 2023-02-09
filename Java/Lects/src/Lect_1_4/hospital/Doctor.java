package Lect_1_4.hospital;

public abstract class Doctor {
    protected String name;

    public Doctor(String name) {
        this.name = name;
    }

    public abstract void treat();
}
