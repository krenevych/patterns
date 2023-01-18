#include "text_editor.hpp"

#include <iostream>


TextEditor::SaveDocument::SaveDocument(Document*& document)
: document(document) {}

TextEditor::SaveDocument::~SaveDocument() {}

void TextEditor::SaveDocument::execute()
{
  if (this->document != nullptr)
  {
    this->document->save();
  }
}

TextEditor::PrintDocument::PrintDocument(Document*& document)
: document(document) {}

TextEditor::PrintDocument::~PrintDocument() {}

void TextEditor::PrintDocument::execute()
{
  if (this->document != nullptr)
  {
    this->document->print();
  }
}

TextEditor::ShowInfo::ShowInfo(Document*& document)
: document(document) {}

TextEditor::ShowInfo::~ShowInfo() {}

void TextEditor::ShowInfo::execute()
{
  if (this->document != nullptr)
  {
    this->document->showInfo();
  }
}


TextEditor::TextEditor() :
  saveButton(Button()),
  printButton(Button()),

  saveMenuItem(MenuItem()),
  printMenuItem(MenuItem()),
  showInfoMenuItem(MenuItem()),

  saveShortcut(Shortcut()),
  printShortcut(Shortcut())
{
  this->saveButton.setCommand(
    new TextEditor::SaveDocument(this->document)
  );
  this->printButton.setCommand(
    new TextEditor::PrintDocument(this->document)
  );

  this->saveMenuItem.setCommand(
    new TextEditor::SaveDocument(this->document)
  );
  this->printMenuItem.setCommand(
    new TextEditor::PrintDocument(this->document)
  );
  this->showInfoMenuItem.setCommand(
    new TextEditor::ShowInfo(this->document)
  );

  this->saveShortcut.setCommand(
    new TextEditor::SaveDocument(this->document)
  );
  this->printShortcut.setCommand(
    new TextEditor::PrintDocument(this->document)
  );
}

TextEditor::~TextEditor() {}

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
  this->printButton.click();
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
