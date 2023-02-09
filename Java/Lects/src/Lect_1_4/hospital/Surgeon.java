package Lect_1_4.hospital;

public class Surgeon extends Doctor {
    public Surgeon(String name) {
        super(name);
    }

    @Override
    public void treat() {
        System.out.printf("Хірург %s пиляє кісточку!\n", name);
    }
}
