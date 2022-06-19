public class Wheel {
    public enum Material {
        Steel, //  стальний диск
        Alloy  //  легкосплавний
    }

    final private Material material;
    final int diameter;

    public Wheel(int diameter) {
        this.material = Material.Steel;
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
