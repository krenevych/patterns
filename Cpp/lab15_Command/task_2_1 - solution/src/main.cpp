#include "text_editor.hpp"


int main()
{
  TextEditor textEditor{};
  textEditor.newDocument("blank.txt");

  /////////////////////////////////////////////
  // Testing buttons, menu items, shortcuts...
  //////////////////////////////////////////////
  textEditor.clickSaveButton();
  textEditor.clickPrintButton();
  textEditor.selectShowInfoMenuItem();
  textEditor.selectPrintMenuItem();
  textEditor.selectSaveMenuItem();
  textEditor.pressSaveShortcut();
  textEditor.pressPrintShortcut();

  return 0;
}
