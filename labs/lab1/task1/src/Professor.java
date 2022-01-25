public class Professor {

    private Student student;

    public Professor(Student student) {
        this.student = student;
    }

    void setStudent(Student student){
        this.student = student;
    }

    // ...

    public boolean teach(Course course){
        // ...
        return this.student.remember(course.getKnowledge());
    }

}
