#include "question.h"

/*question类的函数定义*/
Question::Question(){}
Question::Question(QString titleText,QString contentText):BasicInfo(QString::number(questionNum,10),curUser->ID,operation->GetTime(),contentText){//用于提问时新建
    this->title=titleText;
  //  content=contentText;
    this->answerNum=0;
    this->noticeNum=0;
   // founderID=curUser->ID;
   // ID=questionNum;
}

Question::Question(QString questionTitle,QString questionContent,QString founderID,QString date):BasicInfo(QString::number(questionNum,10),founderID,date,questionContent)
{//用于文本读入时新建
    this->title=questionTitle;
    this->answerNum=0;
    this->noticeNum=0;
}


 QString Question::GetTitle()
{
return this->title;
}


int Question::GetNoticeNum()
{
return this->noticeNum;
}

int Question::GetAnswerNum()
{
return this->answerNum;
}

void Question::IncAnswerNum()
{
 this->answerNum++;
}

void Question::IncNoticeNum()
{
 this->noticeNum++;
}

//重载运算符
QTextStream & operator << (QTextStream &out, Question &q)
{   int i;
    out << q.ID << '\n' << q.founderID << '\n' << q.title << '\n' <<q.content << '\n' << q.date<<'\n'<< q.answerNum << '\n' << q.noticeNum <<'\n';
    for(i=0;i<q.answerNum;i++)
    {
    out << q.accordAnswerVector[i] << '\n';
    }//该问题对应的答案ID}
    return out;
}

//重载运算符
QTextStream & operator >> (QTextStream &in, Question &q)
{
    QString id;
    int i;
    q.ID=in.readLine();
    q.founderID=in.readLine();
    q.title=in.readLine();
    q.content=in.readLine();
    q.date=in.readLine();
    q.answerNum=in.readLine().toInt();
    q.noticeNum=in.readLine().toInt();
    qDebug()<<q.ID;

//    q.accordAnswerVector.clear();
    for(i=0;i<q.answerNum;i++)
{
    id=in.readLine();
  //  qDebug()<<"** "<<id;
    q.accordAnswerVector.push_back(id);
 //   qDebug()<<q.accordAnswerVector.back();
 //   qDebug()<<q.accordAnswerVector.size();
}//该问题对应的答案ID}
/*for(int i=0;i<q.answerNum;i++){

 qDebug()<<"?? " <<q.accordAnswerVector[i];//
}*/
return in;
}

void Question::Print()
{
    qDebug() << "Question::Print()" << endl;
}
