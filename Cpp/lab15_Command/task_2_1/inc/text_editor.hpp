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

  Button const saveButton;
  Button const printButton;

  MenuItem const saveMenuItem;
  MenuItem const printMenuItem;
  MenuItem const showInfoMenuItem;

  Shortcut const saveShortcut;
  Shortcut const printShortcut;
};
