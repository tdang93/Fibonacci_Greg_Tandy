#include "textedit.h"
#include "ui_textedit.h"
#include "consumer.h"
//#include <QTextEdit>

//TextEdit::TextEdit(QTextEdit *parent) : QTextEdit(parent), ui(new Ui::TextEdit)
//{
//    ui->setupUi(this);
//}

TextEdit::~TextEdit()
{
    delete ui;
}

void TextEdit::SetText(QString QS)
{
    //QTE.insertPlainText(QString::number(sent));
    //QTE.show();

    insertPlainText(QS);
}
