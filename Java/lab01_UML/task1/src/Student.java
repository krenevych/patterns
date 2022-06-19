import java.util.HashMap;
import java.util.Map;

public class Student {

    private final Map<String, Course.Level> skills = new HashMap();

    public boolean remember(String knowledge, Course.Level level)
    {
        Course.Level currLevel = skills.get(knowledge);
        if (currLevel == null && level == Course.Level.Base) {
            skills.put(knowledge, level);
            return true;
        } else if (currLevel != null && level.ordinal() == currLevel.ordinal() + 1) {
            skills.put(knowledge, level);
            return true;
        }
        return false;
    }

    @Override
    public String toString() {
        return "Student{" +
                "skills=" + skills +
                '}';
    }
}
