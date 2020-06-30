/********************************************************************************
** Form generated from reading UI file 'focuslistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOCUSLISTDIALOG_H
#define UI_FOCUSLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_FocuslistDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *FocuslistDialog)
    {
        if (FocuslistDialog->objectName().isEmpty())
            FocuslistDialog->setObjectName(QStringLiteral("FocuslistDialog"));
        FocuslistDialog->resize(318, 452);
        label = new QLabel(FocuslistDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 30, 59, 16));
        label_2 = new QLabel(FocuslistDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 60, 41, 16));
        label_3 = new QLabel(FocuslistDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 90, 101, 16));
        tableWidget = new QTableWidget(FocuslistDialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(45, 121, 231, 271));
        label_4 = new QLabel(FocuslistDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 60, 21, 16));
        label_5 = new QLabel(FocuslistDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 60, 59, 16));
        pushButton = new QPushButton(FocuslistDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 400, 115, 32));
        pushButton_2 = new QPushButton(FocuslistDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 400, 115, 32));

        retranslateUi(FocuslistDialog);

        QMetaObject::connectSlotsByName(FocuslistDialog);
    } // setupUi

    void retranslateUi(QDialog *FocuslistDialog)
    {
        FocuslistDialog->setWindowTitle(QApplication::translate("FocuslistDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("FocuslistDialog", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("FocuslistDialog", "Like", Q_NULLPTR));
        label_3->setText(QApplication::translate("FocuslistDialog", "FoucusList", Q_NULLPTR));
        label_4->setText(QApplication::translate("FocuslistDialog", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("FocuslistDialog", "People", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FocuslistDialog", "Clear", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FocuslistDialog", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FocuslistDialog: public Ui_FocuslistDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOCUSLISTDIALOG_H
