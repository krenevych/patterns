import java.io.*;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class WeatherReader {

    private final DataUpdateListener dataUpdateListener;
    private final String filePath;
    private final Lock lock = new ReentrantLock(true);

    public interface DataUpdateListener {
        void onDataUpdate(String city, float temperature, float humidity, float pressure);
    }

    public WeatherReader(String filePath, DataUpdateListener dataUpdateListener) {
        this.dataUpdateListener = dataUpdateListener;
        this.filePath = filePath;

        Thread thread = new Thread(this::read);
        thread.start();

        try {
            thread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    void notifyListener(String data) {
        if (dataUpdateListener != null && data != null) {
            String[] s = data.split(" ");
            if (s.length == 4) {
                dataUpdateListener.onDataUpdate(s[0], Float.parseFloat(s[1]), Float.parseFloat(s[2]), Float.parseFloat(s[3]));
            }
        }
    }


    public void read() {

        try (BufferedReader reader = new BufferedReader(new FileReader(filePath))) {
            reader.lines().forEach(line -> {
                        notifyListener(line);

                        try {
                            Thread.sleep(1000);
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        }
                    }
            );
        } catch (IOException e) {
            e.printStackTrace();
        }


    }


}
