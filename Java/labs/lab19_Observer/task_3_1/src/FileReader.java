import java.io.*;

public class FileReader {

    private final String filePath;

    public FileReader(String filePath) {
        this.filePath = filePath;

        Thread thread = new Thread(this::read);
        thread.start();
    }

    public void read() {
        try (BufferedReader reader = new BufferedReader(new java.io.FileReader(filePath))) {
            reader.lines().forEach(this::onLineRead);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    void onLineRead(String line) {
        System.out.println(line);

    }


}
