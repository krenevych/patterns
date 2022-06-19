import java.util.ArrayList;
import java.util.List;
import java.util.Random;


public class Main {

    final static private Random randomGenerator = new Random();

    public static void main(String[] args) {


        Course[] courses = {
                new Math(),
                new MathIntermediate(),
                new MathAdvanced(),
                new Philosophy(),
                new PhilosophyIntermediate(),
                new PhilosophyAdvanced(),
                new Programming(),
                new ProgrammingIntermediate(),
                new ProgrammingAdvanced()
        };


        Professor professor = new Professor();
        Student ivanenko = new Student();

        professor.setStudent(ivanenko);


        int failCount = 0;
        int size = courses.length;
        for (int i = 0; i < 45; i++){
            int courseNum = randomGenerator.nextInt(size);
            Course course = courses[courseNum];
            boolean success = professor.teach(course);
            if (!success){
                failCount++;
                continue;
            }
            System.out.println(ivanenko);
        }

        System.out.printf("failCount = %s\n", failCount);
        System.out.println(ivanenko);


    }
}



