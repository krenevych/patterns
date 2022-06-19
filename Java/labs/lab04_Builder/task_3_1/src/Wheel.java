public class Wheel {
    public enum Material {
        Steel, //  стальний диск
        Alloy,  //  легкосплавний
        Forged  //  кований легкосплавний диск
    }

    final private Material material;
    final int diameter;

    public Wheel(Material material, int diameter) {
        this.material = material;
        this.diameter = diameter;
    }

    @Override
    public String toString() {
        return "Wheel{" +
                "material=" + material +
                ", diameter=" + diameter +
                '}';
    }
}
