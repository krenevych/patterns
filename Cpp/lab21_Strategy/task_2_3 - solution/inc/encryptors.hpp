#pragma once
#include <string>


class Encryptor
{
public:
  virtual std::string encryptFile() = 0;
};


class AESEncryptor: public Encryptor
{
public:
  AESEncryptor();
  std::string encryptFile();
};


class RSAEncryptor: public Encryptor
{
public:
  RSAEncryptor();
  std::string encryptFile();
};
