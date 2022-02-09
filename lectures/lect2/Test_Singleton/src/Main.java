public class Main {
    public static void main(String[] args) {
//        Singleton.getInstance().getRecourses();

        Thread thread1 = new Thread(() -> Singleton.getInstance().getRecourses());
        Thread thread2 = new Thread(() -> Singleton.getInstance().getRecourses());

        thread1.start();
        thread2.start();

        try {
            thread1.join();
            thread2.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        System.out.println("After threads... ");
        Singleton.getInstance().getRecourses();
        Singleton.getInstance().getRecourses();
        Singleton.getInstance().getRecourses();
    }
}
