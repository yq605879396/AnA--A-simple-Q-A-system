/********************************************************************************
** Form generated from reading UI file 'questiondetailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONDETAILSDIALOG_H
#define UI_QUESTIONDETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_QuestionDetailsDialog
{
public:
    QTableWidget *AnswerTable;
    QPushButton *AddLike;
    QLabel *FounderID;
    QLabel *FoundDate;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *Fresh;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *FansNum;
    QLabel *label_6;
    QLabel *label_7;
    QTextBrowser *TitleText;
    QTextBrowser *ContentText;
    QPushButton *AddNotice;
    QPushButton *AddAnswer;
    QLabel *label_8;
    QLabel *NoticeNum;
    QLabel *label_9;
    QPushButton *pushButton;

    void setupUi(QDialog *QuestionDetailsDialog)
    {
        if (QuestionDetailsDialog->objectName().isEmpty())
            QuestionDetailsDialog->setObjectName(QStringLiteral("QuestionDetailsDialog"));
        QuestionDetailsDialog->resize(808, 279);
        QuestionDetailsDialog->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	border-image:url(:/img/img/0008020203180562_b.png)\n"
"}"));
        AnswerTable = new QTableWidget(QuestionDetailsDialog);
        AnswerTable->setObjectName(QStringLiteral("AnswerTable"));
        AnswerTable->setGeometry(QRect(340, 60, 321, 171));
        AddLike = new QPushButton(QuestionDetailsDialog);
        AddLike->setObjectName(QStringLiteral("AddLike"));
        AddLike->setGeometry(QRect(20, 200, 115, 32));
        FounderID = new QLabel(QuestionDetailsDialog);
        FounderID->setObjectName(QStringLiteral("FounderID"));
        FounderID->setGeometry(QRect(60, 60, 111, 21));
        FoundDate = new QLabel(QuestionDetailsDialog);
        FoundDate->setObjectName(QStringLiteral("FoundDate"));
        FoundDate->setGeometry(QRect(60, 170, 81, 16));
        label = new QLabel(QuestionDetailsDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 40, 59, 16));
        label_2 = new QLabel(QuestionDetailsDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 110, 59, 16));
        label_3 = new QLabel(QuestionDetailsDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 40, 59, 16));
        Fresh = new QPushButton(QuestionDetailsDialog);
        Fresh->setObjectName(QStringLiteral("Fresh"));
        Fresh->setGeometry(QRect(680, 160, 101, 31));
        label_4 = new QLabel(QuestionDetailsDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 90, 81, 16));
        label_5 = new QLabel(QuestionDetailsDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 110, 59, 16));
        FansNum = new QLabel(QuestionDetailsDialog);
        FansNum->setObjectName(QStringLiteral("FansNum"));
        FansNum->setGeometry(QRect(60, 110, 16, 16));
        label_6 = new QLabel(QuestionDetailsDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 140, 111, 21));
        label_7 = new QLabel(QuestionDetailsDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 40, 111, 16));
        TitleText = new QTextBrowser(QuestionDetailsDialog);
        TitleText->setObjectName(QStringLiteral("TitleText"));
        TitleText->setGeometry(QRect(160, 60, 151, 41));
        ContentText = new QTextBrowser(QuestionDetailsDialog);
        ContentText->setObjectName(QStringLiteral("ContentText"));
        ContentText->setGeometry(QRect(160, 140, 151, 91));
        AddNotice = new QPushButton(QuestionDetailsDialog);
        AddNotice->setObjectName(QStringLiteral("AddNotice"));
        AddNotice->setGeometry(QRect(680, 120, 101, 31));
        AddAnswer = new QPushButton(QuestionDetailsDialog);
        AddAnswer->setObjectName(QStringLiteral("AddAnswer"));
        AddAnswer->setGeometry(QRect(680, 80, 101, 31));
        label_8 = new QLabel(QuestionDetailsDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(690, 40, 91, 16));
        NoticeNum = new QLabel(QuestionDetailsDialog);
        NoticeNum->setObjectName(QStringLiteral("NoticeNum"));
        NoticeNum->setGeometry(QRect(710, 60, 21, 16));
        label_9 = new QLabel(QuestionDetailsDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(740, 60, 41, 16));
        pushButton = new QPushButton(QuestionDetailsDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(680, 200, 101, 31));

        retranslateUi(QuestionDetailsDialog);

        QMetaObject::connectSlotsByName(QuestionDetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *QuestionDetailsDialog)
    {
        QuestionDetailsDialog->setWindowTitle(QApplication::translate("QuestionDetailsDialog", "Dialog", Q_NULLPTR));
        AddLike->setText(QApplication::translate("QuestionDetailsDialog", "+ like", Q_NULLPTR));
        FounderID->setText(QApplication::translate("QuestionDetailsDialog", "TextLabel", Q_NULLPTR));
        FoundDate->setText(QApplication::translate("QuestionDetailsDialog", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("QuestionDetailsDialog", "Title", Q_NULLPTR));
        label_2->setText(QApplication::translate("QuestionDetailsDialog", "Content", Q_NULLPTR));
        label_3->setText(QApplication::translate("QuestionDetailsDialog", "Answers", Q_NULLPTR));
        Fresh->setText(QApplication::translate("QuestionDetailsDialog", "Fresh", Q_NULLPTR));
        label_4->setText(QApplication::translate("QuestionDetailsDialog", "Followed by:", Q_NULLPTR));
        label_5->setText(QApplication::translate("QuestionDetailsDialog", "people", Q_NULLPTR));
        FansNum->setText(QApplication::translate("QuestionDetailsDialog", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("QuestionDetailsDialog", "Founded Time:", Q_NULLPTR));
        label_7->setText(QApplication::translate("QuestionDetailsDialog", "Founder ID:", Q_NULLPTR));
        AddNotice->setText(QApplication::translate("QuestionDetailsDialog", "Notice  ", Q_NULLPTR));
        AddAnswer->setText(QApplication::translate("QuestionDetailsDialog", "Answer", Q_NULLPTR));
        label_8->setText(QApplication::translate("QuestionDetailsDialog", "Noticed by:", Q_NULLPTR));
        NoticeNum->setText(QApplication::translate("QuestionDetailsDialog", "TextLabel", Q_NULLPTR));
        label_9->setText(QApplication::translate("QuestionDetailsDialog", "people", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QuestionDetailsDialog", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QuestionDetailsDialog: public Ui_QuestionDetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONDETAILSDIALOG_H
