abstract public class Pizza {

    public abstract void cook();

    public void printInstructions() {  // шаблонний метод
        makeBase();
        addToppings();
        cook();
        System.out.println();
    }

    public void makeBase() {
        System.out.println("Mix flour, yeast and salt");
        System.out.println("Roll out the dough");
    }

    public void addToppings() {
        System.out.println("Add tomato");
        System.out.println("Add cheese");
    }

}
