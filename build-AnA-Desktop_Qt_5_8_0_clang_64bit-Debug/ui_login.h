/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *LoginButtion;
    QLineEdit *NameText;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *PasswordText;
    QLabel *label_3;
    QPushButton *RegisterButton;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(405, 271);
        login->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	border-image:url(:/img/img/0008020203180562_b.png)\n"
"}"));
        LoginButtion = new QPushButton(login);
        LoginButtion->setObjectName(QStringLiteral("LoginButtion"));
        LoginButtion->setGeometry(QRect(20, 190, 182, 31));
        LoginButtion->setStyleSheet(QLatin1String("border-style:outset;\n"
"font:bold 14px;\n"
"min-width:10em;\n"
"padding:6px;\n"
""));
        NameText = new QLineEdit(login);
        NameText->setObjectName(QStringLiteral("NameText"));
        NameText->setGeometry(QRect(160, 110, 113, 20));
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 150, 54, 20));
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 111, 54, 21));
        PasswordText = new QLineEdit(login);
        PasswordText->setObjectName(QStringLiteral("PasswordText"));
        PasswordText->setGeometry(QRect(160, 150, 113, 20));
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 50, 231, 31));
        QFont font;
        font.setFamily(QStringLiteral("AcadEref"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setMargin(0);
        label_3->setIndent(-1);
        RegisterButton = new QPushButton(login);
        RegisterButton->setObjectName(QStringLiteral("RegisterButton"));
        RegisterButton->setGeometry(QRect(210, 190, 182, 31));
        RegisterButton->setStyleSheet(QLatin1String("border-style:outset;\n"
"font:bold 14px;\n"
"min-width:10em;\n"
"padding:6px;"));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", Q_NULLPTR));
        LoginButtion->setText(QApplication::translate("login", "login", Q_NULLPTR));
        NameText->setText(QString());
        label_2->setText(QApplication::translate("login", "\345\257\206    \347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("login", "\347\224\250 \346\210\267 \345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("login", "<html><head/><body><p>Ask &amp; Anwser</p></body></html>", Q_NULLPTR));
        RegisterButton->setText(QApplication::translate("login", "register", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
