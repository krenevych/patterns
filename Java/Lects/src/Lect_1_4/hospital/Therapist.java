package Lect_1_4.hospital;

public class Therapist extends Doctor {
    public Therapist(String name) {
        super(name);
    }

    @Override
    public void treat() {
        System.out.printf("Терапевт %s дає пігулки\n", name);
    }
}
