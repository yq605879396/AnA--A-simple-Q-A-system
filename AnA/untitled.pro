#-------------------------------------------------
#
# Project created by QtCreator 2020-11-10T02:20:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
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
    answer.cpp \
    answerdialog.cpp \
    askdialog.cpp \
    basicinfo.cpp \
    likelistdialog.cpp \
    loaderandsaver.cpp \
    login.cpp \
    noticelistdialog.cpp \
    operation.cpp \
    question.cpp \
    questionandanswerlistdialog.cpp \
    questiondetailsdialog.cpp \
    reg.cpp \
    searcher.cpp \
    showothersdialog.cpp \
    user.cpp

HEADERS += \
        mainwindow.h \
    answer.h \
    answerdialog.h \
    askdialog.h \
    basicinfo.h \
    likelistdialog.h \
    loaderandsaver.h \
    login.h \
    noticelistdialog.h \
    operation.h \
    question.h \
    questionandanswerlistdialog.h \
    questiondetailsdialog.h \
    reg.h \
    searcher.h \
    showothersdialog.h \
    total.h \
    user.h

FORMS += \
        mainwindow.ui \
    answerdialog.ui \
    askdialog.ui \
    likelistdialog.ui \
    login.ui \
    noticelistdialog.ui \
    questionandanswerlistdialog.ui \
    questiondetailsdialog.ui \
    reg.ui \
    showothersdialog.ui

RESOURCES += \
    res.qrc

DISTFILES += \
    user.txt

