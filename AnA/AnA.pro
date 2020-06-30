#-------------------------------------------------
#
# Project created by QtCreator 2017-09-15T12:34:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AnA
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


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    reg.cpp \
    searcher.cpp \
    operation.cpp \
    loaderandsaver.cpp \
    user.cpp \
    question.cpp \
    answer.cpp \
    askdialog.cpp \
    questiondetailsdialog.cpp \
    answerdialog.cpp \
    noticelistdialog.cpp \
    basicinfo.cpp \
    likelistdialog.cpp \
    questionandanswerlistdialog.cpp \
    showothersdialog.cpp

HEADERS  += \
    total.h \
    reg.h \
    searcher.h \
    operation.h \
    mainwindow.h \
    login.h \
    loaderandsaver.h \
    user.h \
    question.h \
    answer.h \
    askdialog.h \
    questiondetailsdialog.h \
    answerdialog.h \
    likelistdialog.h \
    noticelistdialog.h \
    basicinfo.h \
    questionandanswerlistdialog.h \
    showothersdialog.h

FORMS    += mainwindow.ui \
    login.ui \
    reg.ui \
    askdialog.ui \
    questiondetailsdialog.ui \
    answerdialog.ui \
    likelistdialog.ui \
    noticelistdialog.ui \
    questionandanswerlistdialog.ui \
    showothersdialog.ui

RESOURCES += \
    res.qrc


