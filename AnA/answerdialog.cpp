#include "answerdialog.h"
#include "ui_answerdialog.h"

/*回答页面*/

AnswerDialog::AnswerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AnswerDialog)
{
    ui->setupUi(this);

}

AnswerDialog::~AnswerDialog()
{
    delete ui;
}

void AnswerDialog::on_pushButton_2_clicked()
{
    reject();
}



void AnswerDialog::on_pushButton_3_clicked()
{   //在answerVector中添加该回答
    QString answerString=ui->AnswerText->toPlainText();
    Answer newAnswer =Answer(answerString);
    answerVector.push_back(newAnswer);
    answerNum++;

    //在每个人回答的问题vector中添加
    curUser->IncUserAnswerNum();
    curUser->answerQuestionID.push_back(newAnswer.GetID());

    //在对应问题中添加该回答
    questionVector[curQuestion].IncAnswerNum();
    questionVector[curQuestion].accordAnswerVector.push_back(newAnswer.GetID());
    //   测试用
    //   QMessageBox::information(NULL,"","Answered successfully~~^>.<^"+QString::number(questionVector[curQuestion].GetAnswerNum(),10),QMessageBox::Yes);
    //   QMessageBox::information(NULL,"",QString::number(answerNum,10),QMessageBox::Yes);
    //   QMessageBox::information(NULL,"",questionVector[curQuestion].accordAnswerVector[questionVector[curQuestion].GetAnswerNum()-1],QMessageBox::Yes);
    accept();
}

void AnswerDialog::on_pushButton_clicked()
{
    ui->AnswerText->clear();
}
