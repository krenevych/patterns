public class WeatherDataCenter {

    final private String location;

    private float temperature; // температура повітря
    private float humidity;    // вологість повітря
    private float pressure;    // атмосферний тиск

    public WeatherDataCenter(String location) {
        this.location = location;
    }

    public void setMeasurements(float temperature, float humidity, float pressure) {
        this.temperature = temperature;
        this.humidity = humidity;
        this.pressure = pressure;
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
