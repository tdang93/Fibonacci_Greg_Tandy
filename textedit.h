#ifndef TEXTEDIT_H
#define TEXTEDIT_H

#include <QWidget>

namespace Ui {
class TextEdit;
}

class TextEdit : public QWidget
{
    Q_OBJECT

public:
    explicit TextEdit(QWidget *parent = 0);
    ~TextEdit();
    TextEdit* textEdit_ptr = NULL;
    void SetText();
    int send;

private:
    Ui::TextEdit *ui;
};

#endif // TEXTEDIT_H
