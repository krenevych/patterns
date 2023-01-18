#pragma once
#include "button.hpp"
#include "menu_item.hpp"
#include "shortcut.hpp"
#include "document.hpp"

#include <string>


class TextEditor
{
public:
  TextEditor();
  ~TextEditor();
  void newDocument(std::string const&);
  void clickSaveButton();
  void clickPrintButton();
  void selectSaveMenuItem();
  void selectPrintMenuItem();
  void selectShowInfoMenuItem();
  void pressSaveShortcut();
  void pressPrintShortcut();

private:
  Document* document;

  Button saveButton;
  Button printButton;

  MenuItem saveMenuItem;
  MenuItem printMenuItem;
  MenuItem showInfoMenuItem;

  Shortcut saveShortcut;
  Shortcut printShortcut;
};
