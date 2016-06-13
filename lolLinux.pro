#-------------------------------------------------
#
# Project created by QtCreator 2016-06-10T14:11:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = lolLinux
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    statistics.cpp \
    summoner.cpp

HEADERS  += widget.h \
    statistics.h \
    summoner.h

FORMS    += widget.ui \
    statistics.ui

unix:!macx: LIBS += -L$$PWD/../../../../usr/local/lib/ -lcurlpp -lcurl

INCLUDEPATH += $$PWD/../../../../usr/local/include
DEPENDPATH += $$PWD/../../../../usr/local/include

unix:!macx: PRE_TARGETDEPS += $$PWD/../../../../usr/local/lib/libcurlpp.a
CONFIG += c++11
