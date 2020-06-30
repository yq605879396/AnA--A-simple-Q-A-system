#include "askdialog.h"
#include "ui_askdialog.h"
#include "operation.h"
#include <QMessageBox>

/*提问页面*/

AskDialog::AskDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AskDialog)
{
    ui->setupUi(this);
}

AskDialog::~AskDialog()
{
    delete ui;
}

//清空输入
void AskDialog::on_pushButton_clicked()
{
    ui->TitleText->clear();
    ui->ContentText->clear();
}

//发表提问
void AskDialog::on_pushButton_2_clicked()
{

    QString titleString=ui->TitleText->text();
    QString contentString=ui->ContentText->toPlainText();

    if (titleString == "") {
        QMessageBox::warning(this, tr("登录失败"), tr("标题未填写"));
    }//若未输入标题，弹出提示信息再转为重新输入
    else if (contentString == "") {
        QMessageBox::warning(this, tr("登录失败"), tr("内容未填写"));
    }//若未输入内容，弹出提示信息再转为重新输入
    else{
        //在问题数组中添加
        Question question=Question(titleString,contentString);//新建问题
        question.date=operation->GetTime();
        question.ID=QString::number(questionNum,10);//int到QString 转换函数     
        question.founderID=curUser->GetID();//curUser->ID该如何给curUser赋值
        questionVector.push_back(question);
        questionNum++;
        //在用户中添加问题相关内柔
        curUser->IncQuestionNum();
        curUser->askQuestionID.push_back(question.ID);
        QMessageBox::information(NULL,"","Succeed!!!!!!!!",QMessageBox::Yes);
        accept();
    }

}

void AskDialog::on_pushButton_3_clicked()
{
    reject();
}
