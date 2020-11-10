/********************************************************************************
** Form generated from reading UI file 'answerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANSWERDIALOG_H
#define UI_ANSWERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AnswerDialog
{
public:
    QPlainTextEdit *AnswerText;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *AnswerDialog)
    {
        if (AnswerDialog->objectName().isEmpty())
            AnswerDialog->setObjectName(QStringLiteral("AnswerDialog"));
        AnswerDialog->resize(390, 155);
        AnswerDialog->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	border-image:url(:/img/img/0008020203180562_b.png)\n"
"}"));
        AnswerText = new QPlainTextEdit(AnswerDialog);
        AnswerText->setObjectName(QStringLiteral("AnswerText"));
        AnswerText->setGeometry(QRect(10, 20, 231, 111));
        pushButton = new QPushButton(AnswerDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 20, 101, 31));
        pushButton->setStyleSheet(QStringLiteral("font: bold 12pt \"Segoe Print\";"));
        pushButton_2 = new QPushButton(AnswerDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 60, 101, 31));
        pushButton_2->setStyleSheet(QStringLiteral("font: bold 12pt \"Segoe Print\";"));
        pushButton_3 = new QPushButton(AnswerDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 100, 101, 31));
        pushButton_3->setStyleSheet(QStringLiteral("font: bold 12pt \"Segoe Print\";"));

        retranslateUi(AnswerDialog);

        QMetaObject::connectSlotsByName(AnswerDialog);
    } // setupUi

    void retranslateUi(QDialog *AnswerDialog)
    {
        AnswerDialog->setWindowTitle(QApplication::translate("AnswerDialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AnswerDialog", "Clear", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AnswerDialog", "Back", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AnswerDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnswerDialog: public Ui_AnswerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANSWERDIALOG_H
