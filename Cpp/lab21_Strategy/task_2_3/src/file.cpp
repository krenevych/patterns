#include <iostream>

#include "file.hpp"


File::File(std::string const& fileName)
: fileName(fileName) {}

void File::encrypt(File::EncryptionType encryptionType)
{
  switch (encryptionType)
  {
    case File::EncryptionType::AES:
    {
      std::cout << "Applying AES encryption to " << fileName << std::endl;
      break;
    }
    case File::EncryptionType::DES:
    {
      std::cout << "Applying DES encryption to " << fileName << std::endl;
      break;
    }
    case File::EncryptionType::RSA:
    {
      std::cout << "Applying RSA encryption to " << fileName << std::endl;
      break;
    }
    case File::EncryptionType::ECC:
    {
      std::cout << "Applying ECC encryption to " << fileName << std::endl;
      break;
    }
  }
}
