/********************************************************************************
** Form generated from reading UI file 'likelistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIKELISTDIALOG_H
#define UI_LIKELISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_LikeListDialog
{
public:
    QLabel *label;
    QLabel *LikeNum;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *FansNum;
    QLabel *label_6;
    QTableWidget *FocusTable;
    QTableWidget *FansTable;

    void setupUi(QDialog *LikeListDialog)
    {
        if (LikeListDialog->objectName().isEmpty())
            LikeListDialog->setObjectName(QStringLiteral("LikeListDialog"));
        LikeListDialog->resize(332, 348);
        LikeListDialog->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	border-image:url(:/img/img/0008020203180562_b.png)\n"
"}"));
        label = new QLabel(LikeListDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 31, 16));
        label->setStyleSheet(QStringLiteral("font: bold 10pt \"Segoe Print\";"));
        LikeNum = new QLabel(LikeListDialog);
        LikeNum->setObjectName(QStringLiteral("LikeNum"));
        LikeNum->setGeometry(QRect(80, 40, 21, 16));
        LikeNum->setStyleSheet(QStringLiteral("font: bold 12pt \"Segoe Print\";"));
        label_3 = new QLabel(LikeListDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 40, 41, 16));
        label_3->setStyleSheet(QStringLiteral("font: bold 10pt \"Segoe Print\";"));
        label_4 = new QLabel(LikeListDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 40, 41, 16));
        label_4->setStyleSheet(QStringLiteral("font: bold 10pt \"Segoe Print\";"));
        FansNum = new QLabel(LikeListDialog);
        FansNum->setObjectName(QStringLiteral("FansNum"));
        FansNum->setGeometry(QRect(230, 40, 21, 16));
        FansNum->setStyleSheet(QStringLiteral("font: bold 12pt \"Segoe Print\";"));
        label_6 = new QLabel(LikeListDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 40, 31, 16));
        label_6->setStyleSheet(QStringLiteral("font: bold 10pt \"Segoe Print\";"));
        FocusTable = new QTableWidget(LikeListDialog);
        FocusTable->setObjectName(QStringLiteral("FocusTable"));
        FocusTable->setGeometry(QRect(40, 70, 101, 241));
        FansTable = new QTableWidget(LikeListDialog);
        FansTable->setObjectName(QStringLiteral("FansTable"));
        FansTable->setGeometry(QRect(190, 70, 101, 241));

        retranslateUi(LikeListDialog);

        QMetaObject::connectSlotsByName(LikeListDialog);
    } // setupUi

    void retranslateUi(QDialog *LikeListDialog)
    {
        LikeListDialog->setWindowTitle(QApplication::translate("LikeListDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("LikeListDialog", "Like", Q_NULLPTR));
        LikeNum->setText(QApplication::translate("LikeListDialog", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("LikeListDialog", "People", Q_NULLPTR));
        label_4->setText(QApplication::translate("LikeListDialog", "Have", Q_NULLPTR));
        FansNum->setText(QApplication::translate("LikeListDialog", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("LikeListDialog", "Fans", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LikeListDialog: public Ui_LikeListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIKELISTDIALOG_H
