#pragma once
#include <string>


class File
{
public:
  enum class EncryptionType
  {
    AES,
    DES,
    RSA,
    ECC
  };

  File(std::string const&);
  void encrypt(EncryptionType);

private:
  std::string fileName;
};
