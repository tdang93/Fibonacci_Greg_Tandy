#include "textedit.h"
#include "ui_textedit.h"
#include <QTextEdit>

TextEdit::TextEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TextEdit)
{
    ui->setupUi(this);
}

TextEdit::~TextEdit()
{
    delete ui;
}

void TextEdit::SetText()
{
    QTextEdit::insertPlainText(send);
}
