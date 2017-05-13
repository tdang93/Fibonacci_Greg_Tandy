TEMPLATE = app
TARGET = Fibonacci_Greg_Tandy

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    Consumer.cpp \
    Producer.cpp \
    spinboxwindow.cpp \
    mainwindow.cpp

HEADERS += \
    Consumer.h \
    Producer.h \
    spinboxwindow.h \
    mainwindow.h

FORMS += \
    spinboxwindow.ui \
    mainwindow.ui
