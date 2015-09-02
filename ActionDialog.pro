#-------------------------------------------------
#
# Project created by QtCreator 2013-08-23T23:36:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ActionDialog
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    modeldialog.cpp \
    modelessdialog.cpp

HEADERS  += mainwindow.h \
    modeldialog.h \
    modelessdialog.h

FORMS    += mainwindow.ui \
    modeldialog.ui \
    modelessdialog.ui
