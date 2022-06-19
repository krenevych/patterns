import java.util.Random;

public class ProjectSimulator {

    public static void main(String[] args) {

        Project[] projects = {
                new ProjectProxy("github.com/krenevych/project1"),
                new ProjectProxy("github.com/krenevych/project2"),
                new ProjectProxy("github.com/krenevych/project3"),
                new ProjectProxy("github.com/krenevych/project4"),
                new ProjectProxy("github.com/krenevych/project5"),
                new ProjectProxy("github.com/krenevych/project6"),
        };

        Random random = new Random();
        int projectNum = random.nextInt(projects.length);
        projects[projectNum].run();
    }
}
