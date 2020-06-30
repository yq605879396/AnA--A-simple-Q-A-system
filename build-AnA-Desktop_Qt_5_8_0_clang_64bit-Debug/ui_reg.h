/********************************************************************************
** Form generated from reading UI file 'reg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REG_H
#define UI_REG_H

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

class Ui_reg
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *NameText;
    QLineEdit *PasswordText;
    QLineEdit *ConfirmText;

    void setupUi(QDialog *reg)
    {
        if (reg->objectName().isEmpty())
            reg->setObjectName(QStringLiteral("reg"));
        reg->resize(400, 300);
        reg->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	border-image:url(:/img/img/0008020203180562_b.png)\n"
"}"));
        pushButton = new QPushButton(reg);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 220, 115, 32));
        pushButton_2 = new QPushButton(reg);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 220, 115, 32));
        label = new QLabel(reg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 59, 16));
        label_2 = new QLabel(reg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 110, 59, 16));
        label_3 = new QLabel(reg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 160, 59, 16));
        NameText = new QLineEdit(reg);
        NameText->setObjectName(QStringLiteral("NameText"));
        NameText->setGeometry(QRect(170, 50, 113, 21));
        PasswordText = new QLineEdit(reg);
        PasswordText->setObjectName(QStringLiteral("PasswordText"));
        PasswordText->setGeometry(QRect(170, 110, 113, 21));
        ConfirmText = new QLineEdit(reg);
        ConfirmText->setObjectName(QStringLiteral("ConfirmText"));
        ConfirmText->setGeometry(QRect(170, 160, 113, 21));

        retranslateUi(reg);

        QMetaObject::connectSlotsByName(reg);
    } // setupUi

    void retranslateUi(QDialog *reg)
    {
        reg->setWindowTitle(QApplication::translate("reg", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("reg", "register", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("reg", "refresh", Q_NULLPTR));
        label->setText(QApplication::translate("reg", "Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("reg", "Password", Q_NULLPTR));
        label_3->setText(QApplication::translate("reg", "Confirm", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class reg: public Ui_reg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REG_H
