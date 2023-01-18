#pragma once
#include "button.hpp"
#include "menu_item.hpp"
#include "shortcut.hpp"
#include "document.hpp"
#include "command.hpp"

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

  class SaveDocument: public Command
  {
  public:
    SaveDocument(Document*&);
    ~SaveDocument();
    void execute();

  private:
    Document*& document;
  };

  class PrintDocument: public Command
  {
  public:
    PrintDocument(Document*&);
    ~PrintDocument();
    void execute();

  private:
    Document*& document;
  };

  class ShowInfo: public Command
  {
  public:
    ShowInfo(Document*&);
    ~ShowInfo();
    void execute();

  private:
    Document*& document;
  };
};
