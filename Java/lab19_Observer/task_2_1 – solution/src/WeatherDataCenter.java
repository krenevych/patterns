import java.util.ArrayList;
import java.util.List;

public class WeatherDataCenter {

    final private WeatherReader weatherReader;
    final private List<Subscriber> subscribers = new ArrayList<>();
    public void subscribe(Subscriber subscriber){
        subscribers.add(subscriber);
    }
    public void unsubscribe(Subscriber subscriber){
        subscribers.remove(subscriber);
    }
    public void notifySubscribers(WeatherEvent event){
        for (Subscriber subscriber : subscribers) {
            subscriber.update(this, event);
        }
    }


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

        notifySubscribers(weatherEvent);

        return false;
    }
}
