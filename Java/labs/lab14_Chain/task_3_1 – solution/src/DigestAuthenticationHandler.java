public class DigestAuthenticationHandler extends AuthenticationHandler {

    public void handleRequest(String requestType) {
        if ("digest".equals(requestType)) {
            System.out.println("Handled dlient authentication!");
        } else {
            super.handleRequest(requestType);
        }
    }

}
