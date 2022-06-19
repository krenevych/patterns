public class Client {

    public static void main(String[] args) {

        BasicAuthenticationHandler basicAuthenticationHandler = new BasicAuthenticationHandler();
        ClientCertificateAuthenticationHandler clientCertificateAuthenticationHandler = new ClientCertificateAuthenticationHandler();
        DigestAuthenticationHandler digestAuthenticationHandler = new DigestAuthenticationHandler();

        basicAuthenticationHandler.setNext(clientCertificateAuthenticationHandler);
        clientCertificateAuthenticationHandler.setNext(digestAuthenticationHandler);

        basicAuthenticationHandler.handleRequest("client");

    }

}
