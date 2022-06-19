public class ClientCertificateAuthenticationHandler extends AuthenticationHandler {

    public void handleRequest(String requestType) {
        if ("client".equals(requestType)) {
            System.out.println("Handled client authentication!");
        } else {
            super.handleRequest(requestType);
        }
    }

}
