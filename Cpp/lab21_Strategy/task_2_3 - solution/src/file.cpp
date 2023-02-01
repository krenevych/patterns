#include <iostream>

#include "file.hpp"


File::File(std::string const& fileName)
: fileName(fileName) {}

void File::encrypt(Encryptor* encryptor)
{
  std::cout << encryptor->encryptFile() << " to " << this->fileName << std::endl;
}
