public class Philosophy implements Course {

    @Override
    public String getKnowledge() {
        return "Philosophy";
    }

    @Override
    public Level getLevel() {
        return Level.Base;
    }
}
