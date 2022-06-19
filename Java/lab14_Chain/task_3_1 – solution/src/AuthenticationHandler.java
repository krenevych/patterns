public abstract class AuthenticationHandler {

    private AuthenticationHandler next;

    void setNext(AuthenticationHandler handler){
        this.next = handler;
    }

    public void handleRequest(String requestType) {
        if (next != null){
            next.handleRequest(requestType);
        }
    }

}
