#-------------------------------------------------
#
# Project created by QtCreator 2016-09-13T21:23:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CalendarRedo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    dialogdel.cpp
    #ecreator.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    dialogdel.h
    #ecreator.h

FORMS    += mainwindow.ui \
    dialog.ui \
    #ecreator.ui
    dialogdel.ui
