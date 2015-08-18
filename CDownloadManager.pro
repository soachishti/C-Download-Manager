#-------------------------------------------------
#
# Project created by QtCreator 2015-08-18T08:38:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CDownloadManager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    addurl.cpp \
    settings.cpp \
    about.cpp \
    downloaded.cpp \
    downloading.cpp

HEADERS  += mainwindow.h \
    addurl.h \
    settings.h \
    about.h \
    downloaded.h \
    downloading.h

FORMS    += mainwindow.ui \
    addurl.ui \
    settings.ui \
    about.ui \
    downloaded.ui \
    downloading.ui
