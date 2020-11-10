/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label;
    QLineEdit *DateText;
    QPushButton *pushButton_6;
    QLabel *label_3;
    QPushButton *pushButton_7;
    QLabel *TempPage;
    QLabel *label_4;
    QLabel *TotalPage;
    QPushButton *pushButton_8;
    QPushButton *Search;
    QLineEdit *TitleText;
    QLabel *label_2;
    QLabel *label_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(734, 454);
        MainWindow->setStyleSheet(QLatin1String("QWidget#centralWidget\n"
"{\n"
"	border-image:url(:/img/img/0008020203180562_b.png)\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 100, 121, 31));
        pushButton->setStyleSheet(QStringLiteral("font: bold 12pt \"Segoe Print\";"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 150, 121, 31));
        pushButton_2->setStyleSheet(QStringLiteral("font: bold 12pt \"Segoe Print\";"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 200, 121, 31));
        pushButton_3->setStyleSheet(QStringLiteral("font: bold 12pt \"Segoe Print\";"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(230, 100, 451, 221));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(340, 340, 115, 32));
        pushButton_4->setStyleSheet(QStringLiteral("font: 12pt \"MV Boli\";"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(570, 340, 115, 32));
        pushButton_5->setStyleSheet(QStringLiteral("font: 12pt \"MV Boli\";"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 20, 91, 31));
        label->setStyleSheet(QStringLiteral("font: bold 16pt \"Segoe Print\";"));
        DateText = new QLineEdit(centralWidget);
        DateText->setObjectName(QStringLiteral("DateText"));
        DateText->setGeometry(QRect(290, 70, 111, 16));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(200, 340, 115, 32));
        pushButton_6->setStyleSheet(QStringLiteral("font: 12pt \"MV Boli\";"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 10, 131, 61));
        label_3->setStyleSheet(QStringLiteral("font: bold 16pt \"MV Boli\";"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(50, 250, 121, 31));
        pushButton_7->setStyleSheet(QStringLiteral("font: bold 12pt \"Segoe Print\";"));
        TempPage = new QLabel(centralWidget);
        TempPage->setObjectName(QStringLiteral("TempPage"));
        TempPage->setGeometry(QRect(480, 350, 16, 16));
        TempPage->setStyleSheet(QStringLiteral("font: 12pt \"MV Boli\";"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(500, 350, 16, 16));
        label_4->setStyleSheet(QStringLiteral("font: 12pt \"MV Boli\";"));
        TotalPage = new QLabel(centralWidget);
        TotalPage->setObjectName(QStringLiteral("TotalPage"));
        TotalPage->setGeometry(QRect(520, 350, 16, 16));
        TotalPage->setStyleSheet(QStringLiteral("font: 12pt \"MV Boli\";"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(50, 300, 121, 31));
        pushButton_8->setStyleSheet(QStringLiteral("font: bold 12pt \"Segoe Print\";"));
        Search = new QPushButton(centralWidget);
        Search->setObjectName(QStringLiteral("Search"));
        Search->setGeometry(QRect(610, 60, 81, 31));
        Search->setStyleSheet(QStringLiteral("font: 12pt \"MV Boli\";"));
        TitleText = new QLineEdit(centralWidget);
        TitleText->setObjectName(QStringLiteral("TitleText"));
        TitleText->setGeometry(QRect(490, 70, 101, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 70, 41, 16));
        label_2->setStyleSheet(QStringLiteral("font: 12pt \"MV Boli\";"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(430, 70, 51, 16));
        label_5->setStyleSheet(QStringLiteral("font: 12pt \"MV Boli\";"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Ask", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "My A and Q", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "My Follow", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "last page", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "next page", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Questions", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "refresh", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Welcome!!!!", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "My Notice", Q_NULLPTR));
        TempPage->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\357\274\217", Q_NULLPTR));
        TotalPage->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "save", Q_NULLPTR));
        Search->setText(QApplication::translate("MainWindow", "search", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Title", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
