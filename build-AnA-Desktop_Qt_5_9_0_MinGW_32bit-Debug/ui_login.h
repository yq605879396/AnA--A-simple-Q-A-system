/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
        LoginButtion->setGeometry(QRect(60, 180, 151, 51));
        LoginButtion->setStyleSheet(QLatin1String("font: bold 16pt \"Segoe Print\";\n"
"border-style:outset;\n"
""));
        NameText = new QLineEdit(login);
        NameText->setObjectName(QStringLiteral("NameText"));
        NameText->setGeometry(QRect(160, 110, 113, 20));
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(63, 150, 71, 20));
        label_2->setStyleSheet(QStringLiteral("font: 12pt \"Segoe Script\";"));
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(63, 111, 81, 21));
        label->setStyleSheet(QStringLiteral("font: 12pt \"Segoe Script\";"));
        PasswordText = new QLineEdit(login);
        PasswordText->setObjectName(QStringLiteral("PasswordText"));
        PasswordText->setGeometry(QRect(160, 150, 113, 20));
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 30, 311, 41));
        QFont font;
        font.setFamily(QStringLiteral("MV Boli"));
        font.setPointSize(28);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("font: 28pt \"MV Boli\";"));
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setMargin(0);
        label_3->setIndent(-1);
        RegisterButton = new QPushButton(login);
        RegisterButton->setObjectName(QStringLiteral("RegisterButton"));
        RegisterButton->setGeometry(QRect(180, 190, 182, 31));
        RegisterButton->setStyleSheet(QLatin1String("font: bold 16pt \"Segoe Print\";\n"
"border-style:outset;\n"
""));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LoginButtion->setToolTip(QApplication::translate("login", "<html><head/><body><p><span style=\" color:#42195f;\">login</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LoginButtion->setText(QApplication::translate("login", "login", Q_NULLPTR));
        NameText->setText(QString());
        label_2->setText(QApplication::translate("login", "Password", Q_NULLPTR));
        label->setText(QApplication::translate("login", "Username", Q_NULLPTR));
        label_3->setText(QApplication::translate("login", "<html><head/><body><p><span style=\" color:#42195f;\">Ask &amp; Anwser</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RegisterButton->setToolTip(QApplication::translate("login", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RegisterButton->setText(QApplication::translate("login", "register", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
