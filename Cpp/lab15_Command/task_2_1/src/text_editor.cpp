#include "text_editor.hpp"


TextEditor::TextEditor() :
  saveButton(Button()),
  printButton(Button()),

  saveMenuItem(MenuItem()),
  printMenuItem(MenuItem()),
  showInfoMenuItem(MenuItem()),

  saveShortcut(Shortcut()),
  printShortcut(Shortcut())
{}

TextEditor::~TextEditor()
{
  if (this->document != nullptr)
    delete this->document;
}

void TextEditor::newDocument(std::string const& name)
{
  this->document = new Document(name);
}

void TextEditor::clickSaveButton()
{
  this->saveButton.click();
}

void TextEditor::clickPrintButton()
{
  this->saveMenuItem.select();
}

void TextEditor::selectPrintMenuItem()
{
  this->printMenuItem.select();
}

void TextEditor::selectSaveMenuItem()
{
  this->saveMenuItem.select();
}

void TextEditor::selectShowInfoMenuItem()
{
  this->showInfoMenuItem.select();
}

void TextEditor::pressSaveShortcut()
{
  this->saveShortcut.press();
}

void TextEditor::pressPrintShortcut()
{
  this->printShortcut.press();
}
