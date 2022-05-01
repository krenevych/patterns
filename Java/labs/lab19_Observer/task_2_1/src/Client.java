import java.util.HashMap;
import java.util.Map;

public class Client implements WeatherReader.DataUpdateListener {

    private final Map<String, WeatherDataCenter> weatherCenters = new HashMap<>();

    public Client() {
        String[] cities = {
                "Washington",
                "London",
                "Kyiv",
                "Seoul"
        };
        for (String city : cities) {
            weatherCenters.put(city, new WeatherDataCenter(city));
        }
    }

    @Override
    public void onDataUpdate(String city, float temperature, float humidity, float pressure) {
        WeatherDataCenter center = weatherCenters.get(city);
        System.out.println("Update data: city: " + city
                + ", temperature = " + temperature
                + ", humidity = " + humidity
                + ", pressure = " + pressure);

        if (center != null) {
            center.setMeasurements(temperature, humidity, pressure);
        }
    }
}
