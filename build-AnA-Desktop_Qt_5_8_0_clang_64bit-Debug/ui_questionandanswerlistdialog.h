/********************************************************************************
** Form generated from reading UI file 'questionandanswerlistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONANDANSWERLISTDIALOG_H
#define UI_QUESTIONANDANSWERLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_QuestionAndAnswerListDialog
{
public:
    QTableWidget *AnswerTable;
    QTableWidget *QuestionTable;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *QuestionAndAnswerListDialog)
    {
        if (QuestionAndAnswerListDialog->objectName().isEmpty())
            QuestionAndAnswerListDialog->setObjectName(QStringLiteral("QuestionAndAnswerListDialog"));
        QuestionAndAnswerListDialog->resize(668, 275);
        QuestionAndAnswerListDialog->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	border-image:url(:/img/img/0008020203180562_b.png)\n"
"}"));
        AnswerTable = new QTableWidget(QuestionAndAnswerListDialog);
        AnswerTable->setObjectName(QStringLiteral("AnswerTable"));
        AnswerTable->setGeometry(QRect(40, 70, 271, 161));
        QuestionTable = new QTableWidget(QuestionAndAnswerListDialog);
        QuestionTable->setObjectName(QStringLiteral("QuestionTable"));
        QuestionTable->setGeometry(QRect(360, 70, 271, 161));
        label = new QLabel(QuestionAndAnswerListDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 71, 21));
        label_2 = new QLabel(QuestionAndAnswerListDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(360, 30, 101, 21));

        retranslateUi(QuestionAndAnswerListDialog);

        QMetaObject::connectSlotsByName(QuestionAndAnswerListDialog);
    } // setupUi

    void retranslateUi(QDialog *QuestionAndAnswerListDialog)
    {
        QuestionAndAnswerListDialog->setWindowTitle(QApplication::translate("QuestionAndAnswerListDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("QuestionAndAnswerListDialog", "My Answer", Q_NULLPTR));
        label_2->setText(QApplication::translate("QuestionAndAnswerListDialog", "My Question", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QuestionAndAnswerListDialog: public Ui_QuestionAndAnswerListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONANDANSWERLISTDIALOG_H
