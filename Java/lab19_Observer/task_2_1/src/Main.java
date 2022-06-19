public class Main {

    public static void main(String[] args) {
        WeatherDataCenter dataCenter = new WeatherDataCenter();

        while (true) {    // main loop
            if (dataCenter.update())
                break;
        }

        System.out.println("Finish of the simulation.");
    }

}
