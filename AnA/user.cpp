#include "user.h"

/*User类的函数定义*/

User::User(QString id,QString passwordd)
{ //文本输入时调用
    this->ID=id;
    this->password=passwordd;
    this->fansNum=0;
    this->focusNum=0;
    this->userAnswerNum=0;
    this->noticeNum=0;
    this->questionNum=0;
}

User::User()
{
}

QString User::GetID()
{
    return this->ID;
}


QString User::GetName()
{
    return this->ID;
}

QString User::GetPassword()
{
    return this->ID;
}

int User::GetFansNum()
{
    return this->fansNum;
}

int User::GetFocusNum()
{
    return this->focusNum;
}

int User::GetUserAnswerNum()
{
    return this->userAnswerNum;
}

void User::IncFocusNum()
{
    this->focusNum++;
}

void User::IncFansNum()
{
    this->fansNum++;
}

void User::IncNoticeNum()
{
    this->noticeNum++;
}
void User::IncQuestionNum()
{
    this->questionNum++;
}

void User::IncUserAnswerNum()
{
    this->userAnswerNum++;
}

int User::GetNoticeNum(){
    return this->noticeNum;
}
int User::GetQuestionNum(){
    return this->questionNum;
}

//重载运算符
QTextStream & operator << (QTextStream &out, User &u)
{   int i;
    out << u.ID << '\n' << u.password << '\n' << QString::number(u.focusNum,10)  << '\n' << QString::number(u.fansNum,10) <<'\n' << QString::number(u.noticeNum,10)<< '\n';
    out  << QString::number(u.questionNum,10)<< '\n'  << QString::number(u.userAnswerNum,10) << '\n';
    for(i=0;i<u.focusNum;i++)
    {
      out <<  u.focusID[i] << '\n';
    }
    for(i=0;i<u.fansNum;i++)
    {
      out <<  u.fansID[i] << '\n';
    }


    for(i=0;i<u.noticeNum;i++)
    {
      out <<  u.noticeQuestionID[i] << '\n';
    }

    for(i=0;i<u.questionNum;i++)
    {
      out <<  u.askQuestionID[i] <<'\n';
    }

    for(i=0;i<u.userAnswerNum;i++)
    {
      out <<  u.answerQuestionID[i] << '\n';
    }


return out;
}

//重载运算符
QTextStream & operator >> (QTextStream &in, User &u)
{
    int i;
    QString ID;
    u.ID=in.readLine();
    u.password=in.readLine();
    u.focusNum=in.readLine().toInt();
    u.fansNum=in.readLine().toInt();
    u.noticeNum=in.readLine().toInt();
    u.questionNum=in.readLine().toInt();
    u.userAnswerNum=in.readLine().toInt();
    for(i=0;i<u.focusNum;i++)
    {
        ID=in.readLine();
        u.focusID.push_back(ID);
    }

    for(i=0;i<u.fansNum;i++)
    {
        ID=in.readLine();
        u.fansID.push_back(ID) ;
    }


    for(i=0;i<u.noticeNum;i++)
    {
        ID=in.readLine();
        u.noticeQuestionID.push_back(ID);
    }


    for(i=0;i<u.questionNum;i++)
    {
        ID=in.readLine();
        u.askQuestionID.push_back(ID);
    }


    for(i=0;i<u.userAnswerNum;i++)
    {
        ID=in.readLine();
        u.answerQuestionID.push_back(ID);
    }
    return in;
}
