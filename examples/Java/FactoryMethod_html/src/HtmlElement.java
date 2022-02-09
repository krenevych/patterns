import java.util.ArrayList;

public abstract class HtmlElement {

    public interface ClickListener {
        void onClick(HtmlElement element);
    }

    public final ArrayList<ClickListener> listeners = new ArrayList<>();
    void registerListener(ClickListener listener){
        listeners.add(listener);
    }

    void unregisterListener(ClickListener listener){
        listeners.remove(listener);
    }

    private void notifyListeners(){
        for (ClickListener listener : listeners) {
            listener.onClick(this);
        }
    }

    public void click(){
        notifyListeners();
    }
}
