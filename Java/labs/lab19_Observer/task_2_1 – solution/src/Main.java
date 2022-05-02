public class Main {

    public static void main(String[] args) {
        WeatherDataCenter dataCenter = new WeatherDataCenter();

//        dataCenter.subscribe(new Subscriber() {
//            @Override
//            public void update(WeatherDataCenter dataCenter, WeatherEvent weatherEvent) {
//                System.out.println("Update data: city: " + weatherEvent.getLocation()
//                        + ", temperature = " + weatherEvent.getTemperature()
//                        + ", humidity = " + weatherEvent.getHumidity()
//                        + ", pressure = " + weatherEvent.getPressure());
//            }
//        });

        final int minTemp = -20;
        final int maxTemp =  30;
        dataCenter.subscribe(new Subscriber() {
            @Override
            public void update(WeatherDataCenter dataCenter, WeatherEvent event) {
                if (event.getTemperature() < minTemp || event.getTemperature() > maxTemp){
                    System.out.println("Температура в " + event.getLocation() + " виходить за допустимі межі");
                }
            }
        });

        final int minHumidity = 30;
        dataCenter.subscribe(new Subscriber() {
            @Override
            public void update(WeatherDataCenter dataCenter, WeatherEvent event) {
                if (event.getHumidity() < minHumidity){
                    System.out.println("Вологість у " + event.getLocation() + " нижче допустимої, візьміть з собою пляшку водички!");
                }
            }
        });

        final int maxPressure = 780;
        final int minPressure = 730;
        dataCenter.subscribe(new Subscriber() {
            @Override
            public void update(WeatherDataCenter dataCenter, WeatherEvent event) {
                if (event.getPressure() > maxPressure){
                    System.out.println("Атмосферний тиск у " + event.getLocation() + " вище норми, підготуйте спазмалгон!");
                } else if (event.getPressure() < minPressure){
                    System.out.println("Атмосферний тиск у " + event.getLocation() + " нижче норми, можлива гроза!");
                }
            }
        });

        while (true) {    // main loop
            if (dataCenter.update())
                break;
        }

        System.out.println("Finish of the simulation.");
    }

}
