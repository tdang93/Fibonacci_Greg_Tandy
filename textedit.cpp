#include "textedit.h"
#include "ui_textedit.h"
#include "consumer.h"
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

void TextEdit::SetText(int sent)
{
    //QTextEdit::insertPlainText(QString::number(sent));
    QTextEdit QTE;
    QTE.insertPlainText(QString::number(sent));
}
