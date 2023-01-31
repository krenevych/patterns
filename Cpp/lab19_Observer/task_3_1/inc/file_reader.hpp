#pragma once
#include <string>


class FileReader
{
private:
  std::string const filePath;

public:
  FileReader(std::string const&);
  void read() const;
  void onLineRead(std::string const&) const;
};
