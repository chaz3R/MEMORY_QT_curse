#-------------------------------------------------
#
# Project created by QtCreator 2018-04-18T00:18:00
#
#-------------------------------------------------

QT       += core gui multimedia sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Memory
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    card.cpp \
    gameboard.cpp \
    view.cpp \
    settingswindow.cpp \
    carddatamanager.cpp \
    carddata.cpp \
    cardanimation.cpp \
    settings.cpp \
    menu.cpp \
    databaseview.cpp

HEADERS += \
        mainwindow.h \
    card.h \
    gameboard.h \
    view.h \
    settingswindow.h \
    carddatamanager.h \
    carddata.h \
    cardanimation.h \
    settings.h \
    menu.h \
    databaseview.h \
    customdialog.h

FORMS += \
        mainwindow.ui \
    settingswindow.ui \
    menu.ui \
    databaseview.ui

RESOURCES += \
    resources/generic/generic.qrc \
    resources/fruits/fruits.qrc \
    resources/cars/cars.qrc \
    resources/animals/animals.qrc \
    resources/DataBase/database.qrc

DISTFILES += \
    resources/DataBase/Players.db-journal \
    resources/DataBase/Players.db
