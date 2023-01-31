#include <thread>
#include <iostream>
#include <fstream>

#include "file_reader.hpp"


void FileReader::onLineRead(std::string const& line)
{
  std::cout << line << std::endl;
}

void FileReader::read()
{
  std::string line;

  try
  {
    std::ifstream reader(this->filePath, std::ios_base::in);
    while (std::getline(reader, line))
    {
      this->onLineRead(line);
    }
  }
  catch(std::string msg)
  {
    std::cerr << msg << std::endl;
  }
}

FileReader::FileReader(std::string const& filePath)
: filePath(filePath)
{
  std::thread thd(&FileReader::read, this);
  thd.detach();
}
