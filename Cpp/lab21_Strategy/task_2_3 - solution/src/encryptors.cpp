#include "encryptors.hpp"


//AESEncryptor
AESEncryptor::AESEncryptor() {}

std::string AESEncryptor::encryptFile()
{
  return "Applying AES encryption";
}


//RSAEncryptor
RSAEncryptor::RSAEncryptor() {}

std::string RSAEncryptor::encryptFile()
{
  return "Applying RSA encryption";
}
