#ifndef TEXTEDIT_H
#define TEXTEDIT_H

#include <QWidget>
#include <QTextEdit>

namespace Ui {
class TextEdit;
}

class TextEdit : public QTextEdit
{
    Q_OBJECT

public:
//    explicit TextEdit(QTextEdit *parent = 0);
    ~TextEdit();
    //TextEdit* textEdit_ptr = NULL;
    //void SetText();
    int send;

    QTextEdit QTE;
public slots:
    void SetText(QString);

private:
    Ui::TextEdit *ui;
};

#endif // TEXTEDIT_H
