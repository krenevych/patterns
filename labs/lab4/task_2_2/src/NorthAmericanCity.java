public class NorthAmericanCity implements City {

    private final String name;
    private final double temperature;
    private boolean hasWeatherWarning;

    public NorthAmericanCity(String name, double temperature) {
        this.name = name;
        this.temperature = temperature;
        hasWeatherWarning = false;
    }

    public String getName() {
        return name;
    }

    public double getTemperature() {
        return temperature;
    }

    public String getTemperatureScale() {
        return "Fahrenheit";
    }

    public boolean getHasWeatherWarning() {
        return hasWeatherWarning;
    }

    public void setHasWeatherWarning(boolean hasWeatherWarning) {
        this.hasWeatherWarning = hasWeatherWarning;
    }

}
