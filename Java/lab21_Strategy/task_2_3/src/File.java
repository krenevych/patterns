public class File {

    final private String fileName;

    enum EncryptionType {
        AES,
        DES,
        RSA,
        ECC
    }

    public File(String fileName) {
        this.fileName = fileName;
    }

    public void encrypt(EncryptionType encryptionType) {
        switch (encryptionType) {

            case AES:
                System.out.println("Applying AES encryption to " + fileName);
                break;
            case DES:
                System.out.println("Applying DES encryption to " + fileName);
                break;
            case RSA:
                System.out.println("Applying RSA encryption to " + fileName);
                break;
            case ECC:
                System.out.println("Applying ECC encryption to " + fileName);
                break;
        }


    }

}
