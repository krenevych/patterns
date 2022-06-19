public class Client {

    public static void main(String[] args) {
        Navigator navigator = new Navigator();
//        navigator.setStrategy(new RoadStrategy());
        navigator.setStrategy(new BykeStrategy());
        navigator.buildRoute("Троєщина", "Теремки");
    }

}
