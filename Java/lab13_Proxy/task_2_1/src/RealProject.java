public class RealProject implements Project {
    private final String url;

    public RealProject(String url) {
        this.url = url;
        System.out.println("Loading project " + url + "...");
    }

    @Override
    public void run() {
        System.out.println("\nRunning project " + url + "...");
    }
}
