/********************************************************************************
** Form generated from reading UI file 'noticelistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTICELISTDIALOG_H
#define UI_NOTICELISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_NoticeListDialog
{
public:
    QLabel *label;
    QLabel *NoticeNum;
    QLabel *label_3;
    QTableWidget *NoticeTable;

    void setupUi(QDialog *NoticeListDialog)
    {
        if (NoticeListDialog->objectName().isEmpty())
            NoticeListDialog->setObjectName(QStringLiteral("NoticeListDialog"));
        NoticeListDialog->resize(420, 482);
        NoticeListDialog->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	border-image:url(:/img/img/0008020203180562_b.png)\n"
"}"));
        label = new QLabel(NoticeListDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 40, 131, 21));
        label->setStyleSheet(QStringLiteral("font: bold 12pt \"Segoe Print\";"));
        NoticeNum = new QLabel(NoticeListDialog);
        NoticeNum->setObjectName(QStringLiteral("NoticeNum"));
        NoticeNum->setGeometry(QRect(220, 40, 81, 21));
        NoticeNum->setStyleSheet(QStringLiteral("font: bold 16pt \"Segoe Print\";"));
        label_3 = new QLabel(NoticeListDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 40, 111, 21));
        label_3->setStyleSheet(QStringLiteral("font: bold 12pt \"Segoe Print\";"));
        NoticeTable = new QTableWidget(NoticeListDialog);
        NoticeTable->setObjectName(QStringLiteral("NoticeTable"));
        NoticeTable->setGeometry(QRect(30, 90, 361, 361));

        retranslateUi(NoticeListDialog);

        QMetaObject::connectSlotsByName(NoticeListDialog);
    } // setupUi

    void retranslateUi(QDialog *NoticeListDialog)
    {
        NoticeListDialog->setWindowTitle(QApplication::translate("NoticeListDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("NoticeListDialog", "You have noticed", Q_NULLPTR));
        NoticeNum->setText(QApplication::translate("NoticeListDialog", "3", Q_NULLPTR));
        label_3->setText(QApplication::translate("NoticeListDialog", "questions", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NoticeListDialog: public Ui_NoticeListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICELISTDIALOG_H
