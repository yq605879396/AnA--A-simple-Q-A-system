/********************************************************************************
** Form generated from reading UI file 'showothersdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWOTHERSDIALOG_H
#define UI_SHOWOTHERSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowOthersDialog
{
public:
    QTableWidget *QuestionTable;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *AnswerTable;

    void setupUi(QDialog *ShowOthersDialog)
    {
        if (ShowOthersDialog->objectName().isEmpty())
            ShowOthersDialog->setObjectName(QStringLiteral("ShowOthersDialog"));
        ShowOthersDialog->resize(548, 403);
        ShowOthersDialog->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	border-image:url(:/img/img/0008020203180562_b.png)\n"
"}"));
        QuestionTable = new QTableWidget(ShowOthersDialog);
        QuestionTable->setObjectName(QStringLiteral("QuestionTable"));
        QuestionTable->setGeometry(QRect(310, 80, 171, 231));
        label = new QLabel(ShowOthersDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 30, 81, 21));
        label_2 = new QLabel(ShowOthersDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 30, 81, 21));
        AnswerTable = new QTableWidget(ShowOthersDialog);
        AnswerTable->setObjectName(QStringLiteral("AnswerTable"));
        AnswerTable->setGeometry(QRect(60, 80, 171, 231));

        retranslateUi(ShowOthersDialog);

        QMetaObject::connectSlotsByName(ShowOthersDialog);
    } // setupUi

    void retranslateUi(QDialog *ShowOthersDialog)
    {
        ShowOthersDialog->setWindowTitle(QApplication::translate("ShowOthersDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ShowOthersDialog", "Answers:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ShowOthersDialog", "Questions:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShowOthersDialog: public Ui_ShowOthersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWOTHERSDIALOG_H
