
public class WeatherDataCenter {

    final private WeatherReader weatherReader;

    public WeatherDataCenter() {
        weatherReader = new WeatherReader("resources/input01.txt");
    }

    public boolean update() {
        WeatherEvent weatherEvent = weatherReader.getEvent();
        if (weatherEvent == null){
            return false;
        }

        if (weatherEvent.getLocation().equals("end")){
            return true;
        }

        System.out.println("Update data: city: " + weatherEvent.getLocation()
                + ", temperature = " + weatherEvent.getTemperature()
                + ", humidity = " + weatherEvent.getHumidity()
                + ", pressure = " + weatherEvent.getPressure());

        return false;
    }
}
