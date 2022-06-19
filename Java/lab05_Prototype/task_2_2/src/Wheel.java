public class Wheel implements CloneableWheel{
    @Override
    public Wheel clone() {
        return new Wheel(material, diameter);
    }

    public enum Material {
        Steel, //  стальний диск
        Alloy  //  легкосплавний
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
