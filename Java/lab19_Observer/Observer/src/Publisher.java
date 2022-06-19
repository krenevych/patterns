import java.util.ArrayList;
import java.util.List;

public class Publisher {

    final private String publisherName;
    final private List<Subscriber> subscribers = new ArrayList<>();
    private String mainState = "";

    public Publisher(String publisherName) {
        this.publisherName = publisherName;
    }

    public String getPublisherName() {
        return publisherName;
    }

    @Override
    public String toString() {
        return "Publisher{" +
                "publisherName='" + publisherName + '\'' +
                ", mainState='" + mainState + '\'' +
                '}';
    }

    public void setMainState(String newState) {
        mainState = newState;
        notifySubscribers(mainState);
    }

    public String getMainState() {
        return mainState;
    }

    void subscribe(Subscriber subscriber){
        subscribers.add(subscriber);
    }

    void unsubscribe(Subscriber subscriber){
        subscribers.remove(subscriber);
    }

    void notifySubscribers(String context){
        for (Subscriber subscriber : subscribers) {
            subscriber.update(this, context);
        }


    }
}
