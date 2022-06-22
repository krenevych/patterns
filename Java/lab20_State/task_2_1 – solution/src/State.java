public interface State {
    void publish(Document document, String user);  // публікація
    void abandon(Document document, String user);  // відхилення публікції
}
