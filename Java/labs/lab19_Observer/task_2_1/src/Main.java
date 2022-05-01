public class Main {

    public static void main(String[] args) {
        Client client = new Client();
        WeatherReader weatherReader = new WeatherReader("resources/input01.txt", client);

    }

}
