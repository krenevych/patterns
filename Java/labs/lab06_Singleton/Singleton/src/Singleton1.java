public class Singleton1 {

    final private static Singleton1 instance = new Singleton1();

    private Singleton1() {
    }

    public static Singleton1 getInstance() {
        return instance;
    }

    public void getRecourses(){
        System.out.println("gettting recourses..." + this);
    }

}
