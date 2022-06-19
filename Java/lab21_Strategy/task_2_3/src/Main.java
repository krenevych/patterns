public class Main {

  public static void main(String[] args) {
    File file = new File("test.pdf");
    file.encrypt(File.EncryptionType.AES);
  }

}
