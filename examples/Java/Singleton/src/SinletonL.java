
public class SinletonL {

    private static final SinletonL instance;

    static {
        instance = new SinletonL();
    }

    public static SinletonL getInstance() {
        return instance;
    }


    public String toString() {
        return "SingletonL{" +
                "data='" + data + '\'' +
                '}';
    }

    public String getData() {
        return data;
    }

    public void setData(String data) {
        this.data = data;
    }

    private String data;
}
