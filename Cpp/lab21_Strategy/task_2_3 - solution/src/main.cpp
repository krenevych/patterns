#include "file.hpp"


int main()
{
  File file("test.pdf");
  Encryptor* aesEncryptor = new AESEncryptor();

  file.encrypt(aesEncryptor);

  return 0;
}
