#include "reg.h"
#include "ui_reg.h"

/*注册页面*/

reg::reg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reg)
{
    ui->setupUi(this);
}

reg::~reg()
{
    delete ui;
}

void reg::on_pushButton_clicked()
{   QString userID;
    QString userPassword;
    userID =ui->NameText->text();
    userPassword =ui->PasswordText->text();
    if (userID == "")
    {
        QMessageBox::warning(this, tr(""), tr("账号未填写"));
    }//若未输入账号，弹出提示信息再转为重新输入
    else if (userPassword== "")
    {
        QMessageBox::warning(this, tr(""), tr("密码未填写"));
    }//若未输入密码，弹出提示信息再转为重新输入
    else
    {

        userID=userID.trimmed();
        userPassword=userPassword.trimmed();
        User newUser=User(userID,userPassword);
        userVector.push_back(newUser);
        userNum++;
        QMessageBox::about(NULL,tr("Congretulations:"),tr("registered successfully"));
        accept();
    }
}

//清空函数
void reg::on_pushButton_2_clicked()
{
    ui->NameText->clear();
    ui->PasswordText->clear();
    ui->ConfirmText->clear();
}
