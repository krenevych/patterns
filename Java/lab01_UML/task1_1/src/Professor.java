public class Professor {

    private Student student;

    void setStudent(Student student){
        this.student = student;
    }

    public boolean teach(Course course){
        if (student == null){
            return false;
        }
        return this.student.remember(course.getKnowledge(), course.getLevel());
    }

}
