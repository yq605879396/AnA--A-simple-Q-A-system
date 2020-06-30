/********************************************************************************
** Form generated from reading UI file 'askdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKDIALOG_H
#define UI_ASKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AskDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *TitleText;
    QTextEdit *ContentText;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *AskDialog)
    {
        if (AskDialog->objectName().isEmpty())
            AskDialog->setObjectName(QStringLiteral("AskDialog"));
        AskDialog->resize(496, 318);
        AskDialog->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	border-image:url(:/img/img/0008020203180562_b.png)\n"
"}"));
        label = new QLabel(AskDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 71, 31));
        label_2 = new QLabel(AskDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 61, 31));
        TitleText = new QLineEdit(AskDialog);
        TitleText->setObjectName(QStringLiteral("TitleText"));
        TitleText->setGeometry(QRect(130, 40, 231, 21));
        ContentText = new QTextEdit(AskDialog);
        ContentText->setObjectName(QStringLiteral("ContentText"));
        ContentText->setGeometry(QRect(130, 80, 231, 141));
        pushButton = new QPushButton(AskDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 260, 115, 32));
        pushButton_2 = new QPushButton(AskDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 260, 115, 32));
        pushButton_3 = new QPushButton(AskDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 260, 115, 32));

        retranslateUi(AskDialog);

        QMetaObject::connectSlotsByName(AskDialog);
    } // setupUi

    void retranslateUi(QDialog *AskDialog)
    {
        AskDialog->setWindowTitle(QApplication::translate("AskDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("AskDialog", "Title", Q_NULLPTR));
        label_2->setText(QApplication::translate("AskDialog", "Content", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AskDialog", "refresh", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AskDialog", "ok", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AskDialog", "cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AskDialog: public Ui_AskDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKDIALOG_H
