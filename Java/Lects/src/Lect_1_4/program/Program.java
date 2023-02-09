package Lect_1_4.program;

public class Program {

    public Program(String name, String version, String size) {
        this.name = name;
        this.version = version;
        this.size = size;
    }

    public String getName() {
        return name;
    }

    public String getVersion() {
        return version;
    }

    public String getSize() {
        return size;
    }

    public void run(){
        System.out.printf("Програма %s запускається...\n", name);
    }

    private final String name;
    private final String version;
    private final String size;



}
