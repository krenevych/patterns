#pragma once
#include <string>

#include "encryptors.hpp"


class File
{
public:
  File(std::string const&);
  void encrypt(Encryptor*);

private:
  std::string fileName;
};
