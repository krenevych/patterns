#include <string>
#include <vector>


int main()
{
  using namespace std;

  vector<string> files {
    "image.jpg",
    "image.png",
    "document.docx",
    "document.doc",
    "table.xls",
    "table.xlsx",
    "presentation.pptx",
    "document.pdf",
  };

  // Create Chain of responsibility to open file by correct program according to the extension.
  for (auto& file: files)
  {
    // open file
    // handler.open(file);
  }

  return 0;
}
