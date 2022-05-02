public class WeatherEvent {

    final private String location;
    private final float temperature; // температура повітря
    private final float humidity;    // вологість повітря
    private final float pressure;    // атмосферний тиск

    public WeatherEvent(String location, float temperature, float humidity, float pressure) {
        this.location = location;
        this.temperature = temperature;
        this.humidity = humidity;
        this.pressure = pressure;
    }

    public String getLocation() {
        return location;
    }

    public float getTemperature() {
        return temperature;
    }

    public float getHumidity() {
        return humidity;
    }

    public float getPressure() {
        return pressure;
    }
}
