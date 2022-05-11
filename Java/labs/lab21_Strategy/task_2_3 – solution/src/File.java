public class File {

  private String fileName;

  public File(String fileName) {
    this.fileName = fileName;
  }

  public void encrypt(Encryptor encryptor) {
    System.out.println(encryptor.encryptFile() + " to " + fileName);
  }

}
