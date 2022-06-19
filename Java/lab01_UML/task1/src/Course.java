public interface Course {

    enum Level {
        Base,
        Intermediate,
        Advanced,
    }

    String getKnowledge();
    default Level getLevel(){
        return Level.Base;
    }
}
