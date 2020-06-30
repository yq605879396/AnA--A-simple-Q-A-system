#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() & ~Qt::WindowMinimizeButtonHint);
    setFixedSize(this->width(),this->height());
}

login::~login()
{
    delete ui;
}

//点击登陆按钮
void login::on_LoginButtion_clicked()
{   //获取输入的账号、密码
    QString usernameString=ui->NameText->text();
    QString passwordString=ui->PasswordText->text();
    if (usernameString == "") {
        QMessageBox::warning(this, tr("登录失败"), tr("账号未填写"));
    }//若未输入账号，弹出提示信息再转为重新输入
    else if (passwordString == "") {
        QMessageBox::warning(this, tr("登录失败"), tr("密码未填写"));
    }//若未输入密码，弹出提示信息再转为重新输入
    else
    {
        int ok=operation->login(usernameString,passwordString);
        if(ok==0)
            QMessageBox::information(NULL,"","该用户未注册",QMessageBox::Yes);
        else if(ok==1)
            QMessageBox::information(NULL,"","密码有误",QMessageBox::Yes);
        else
        {   curUser=searcher->searchUserById(usernameString);
            QMessageBox::warning(this, tr("登录成功"), tr("登录成功"));
            ui->setupUi(this);
            accept();
        }
    }
 }

//点击注册按钮
void login::on_RegisterButton_clicked()
{
    reg r;
    r.exec();
}

