#include "Consumer.h"
#include "Producer.h"
#include "spinboxwindow.h"
#include "textedit.h"

#include <QTextEdit>
#include <QHBoxLayout>
#include <QApplication>

int main(int argc, char **argv)
{
    QList<int> myQList;
    QApplication app(argc, argv);

    SpinBoxWindow spinboxWindow;
    Producer producer;
    TextEdit textEdit;

    spinboxWindow.textEdit_ptr = &textEdit;

    producer.myQList_ptr = &myQList;

//    producer.fill();

    Consumer consumer;
    consumer.myQList_ptr = &myQList;
    spinboxWindow.show();
    consumer.pour();
    QObject::connect(&consumer, SIGNAL(send), &textEdit, SLOT(insertPlainText(int)));

    return app.exec();
}
