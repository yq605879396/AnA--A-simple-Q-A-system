/********************************************************************************
** Form generated from reading UI file 'AnQListDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANQLISTDIALOG_H
#define UI_ANQLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_AnswerListDialog
{
public:
    QLabel *label;
    QTableWidget *AnswerTable;
    QLabel *label_2;
    QTableWidget *QuestionTable;

    void setupUi(QDialog *AnswerListDialog)
    {
        if (AnswerListDialog->objectName().isEmpty())
            AnswerListDialog->setObjectName(QStringLiteral("AnswerListDialog"));
        AnswerListDialog->resize(504, 360);
        AnswerListDialog->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	border-image:url(:/img/img/0008020203180562_b.png)\n"
"}"));
        label = new QLabel(AnswerListDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 141, 21));
        AnswerTable = new QTableWidget(AnswerListDialog);
        AnswerTable->setObjectName(QStringLiteral("AnswerTable"));
        AnswerTable->setGeometry(QRect(40, 60, 131, 211));
        label_2 = new QLabel(AnswerListDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 20, 91, 16));
        QuestionTable = new QTableWidget(AnswerListDialog);
        QuestionTable->setObjectName(QStringLiteral("QuestionTable"));
        QuestionTable->setGeometry(QRect(250, 60, 131, 211));

        retranslateUi(AnswerListDialog);

        QMetaObject::connectSlotsByName(AnswerListDialog);
    } // setupUi

    void retranslateUi(QDialog *AnswerListDialog)
    {
        AnswerListDialog->setWindowTitle(QApplication::translate("AnswerListDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("AnswerListDialog", "My Answer:", Q_NULLPTR));
        label_2->setText(QApplication::translate("AnswerListDialog", "My Question", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnswerListDialog: public Ui_AnswerListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANQLISTDIALOG_H
