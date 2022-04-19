public class BasicAuthenticationHandler extends AuthenticationHandler {

    public void handleRequest(String requestType) {
        if ("basic".equals(requestType)){
            System.out.println("Handled basic authentication!");
        } else {
            super.handleRequest(requestType);
        }
    }

}
