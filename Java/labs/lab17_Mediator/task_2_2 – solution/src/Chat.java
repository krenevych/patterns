import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Chat implements Mediator {

    Map<String, User> users = new HashMap<>();

    void addUser(String id, User user){
        users.put(id, user);
    }

    @Override
    public void sendMessageAll(String message, String userFrom) {
        for (Map.Entry<String, User> userEntry : users.entrySet()) {
            userEntry.getValue().receiveMassage(message, userFrom);
        }
    }

    @Override
    public void sendMessage(String message, String userFrom, String userTo) {
        User user = users.get(userTo);
        user.receiveMassage(message, userFrom);
    }

}
