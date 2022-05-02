import java.util.ArrayList;
import java.util.List;
import java.util.PrimitiveIterator;

public class Publisher {

    final private List<Subscriber> subscribers = new ArrayList<>();

    private String mainState = "";

    public String getName() {
        return name;
    }

    final private String name;

    public Publisher(String name) {
        this.name = name;
    }

    @Override
    public String toString() {
        return "Publisher{" +
                "mainState='" + mainState + '\'' +
                ", name='" + name + '\'' +
                '}';
    }

    public void setMainState(String mainState) {
        this.mainState = mainState;
        notifySubscribers(this.mainState);
    }

    public void subsctirbe(Subscriber subscriber){
        subscribers.add(subscriber);
    }

    public void unsubsctirbe(Subscriber subscriber){
        subscribers.remove(subscriber);
    }

    private void notifySubscribers(String context){
        for (Subscriber subscriber : subscribers) {
            subscriber.update(this, context);
        }
    }

}
