public class Wheel {

    enum DiskMaterial { // Тип матеріалу або способу формування колісного диску
        steel,  // простий стальний диск
        alloy,  // литий легкосплавний диск
        forged  // кований легкосплавний диск
    }

    private final DiskMaterial diskMaterial;
    private final int diameter;

    public Wheel(DiskMaterial diskMaterial, int diameter) {
        this.diskMaterial = diskMaterial;
        this.diameter = diameter;
    }

    public DiskMaterial getDiskMaterial() {
        return diskMaterial;
    }

    public int getDiameter() {
        return diameter;
    }

    @Override
    public String toString() {
        return "Wheel{" +
                "diskMaterial=" + diskMaterial +
                ", diameter=" + diameter +
                '}';
    }
}
