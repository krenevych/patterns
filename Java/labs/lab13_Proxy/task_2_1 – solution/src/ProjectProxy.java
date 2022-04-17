public class ProjectProxy implements Project {

    private Project project;
    final private String url;

    public ProjectProxy(String url) {
        this.url = url;
    }

    @Override
    public void run() {
        if (project == null){
            project = new RealProject(url);
        }
        project.run();
    }
}
