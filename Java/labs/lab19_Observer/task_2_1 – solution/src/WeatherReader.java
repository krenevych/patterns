import java.io.*;
import java.util.ArrayDeque;
import java.util.Queue;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class WeatherReader {

    private final Queue<WeatherEvent> eventQueue = new ArrayDeque<>();
    private final Lock lock = new ReentrantLock(true);
    private final String filePath;

    public WeatherReader(String filePath) {
        this.filePath = filePath;

        Thread thread = new Thread(this::read);
        thread.start();
    }

    public void read() {
        try (BufferedReader reader = new BufferedReader(new FileReader(filePath))) {
            reader.lines().forEach(line -> {
                        String[] s = line.split(" ");
                        if (s.length == 4) {
                            WeatherEvent event = new WeatherEvent(s[0], Float.parseFloat(s[1]), Float.parseFloat(s[2]), Float.parseFloat(s[3]));
                            lock.lock();
                            eventQueue.add(event);
                            lock.unlock();
                        }

                        try {
                            Thread.sleep(1000);
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        }
                    }
            );
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            WeatherEvent event = new WeatherEvent("end", 0, 9, 0                    );
            lock.lock();
            eventQueue.add(event);
            lock.unlock();
        }
    }

    public WeatherEvent getEvent() {
        lock.lock();
        WeatherEvent poll = eventQueue.poll();
        lock.unlock();

        return poll;
    }
}
