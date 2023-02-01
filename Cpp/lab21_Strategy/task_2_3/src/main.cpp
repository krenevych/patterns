#include "file.hpp"


int main()
{
  File file("test.pdf");
  file.encrypt(File::EncryptionType::AES);

  return 0;
}
