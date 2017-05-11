TEMPLATE = app
TARGET = Fibonacci_Greg_Tandy

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    producer.cpp \
    consumer.cpp

HEADERS += \
    producer.h \
    consumer.h
