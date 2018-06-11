TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

QT += xml
QT += core

SOURCES += main.cpp \
    graph.cpp \
    operations.cpp \
    node.cpp

HEADERS += \
    node.h \
    graph.h \
    operations.h
