public class Main {

    public static void main(String[] args){
        System.out.println("Hello!");

        Coffee coffee = new Coffee(34, 300, "Arabica", 0, false);

        Coffee copyCoffee = (Coffee) coffee.clone();
        System.out.println(coffee);
        System.out.println(copyCoffee);

        Late late = new Late(34, 300, "Arabica", 5, false);
        System.out.println(late);

        Late cloneLate = (Late) late.clone();
        System.out.println(cloneLate);
    }

}
