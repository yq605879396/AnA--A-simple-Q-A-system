#include "answer.h"

/*answer类的函数定义*/
Answer::Answer(){}
 Answer::Answer(QString content):BasicInfo(QString::number(answerNum,10),curUser->GetID(),operation->GetTime(),content)
{
    this->praiseNum=0;
    this->belongQuestionID=questionVector[curQuestion].GetID();
 }


int Answer::GetPraiseNum()
{
return this->praiseNum;
}

QString Answer::GetBelongQuestionID()
{
return this->belongQuestionID;
}

void Answer::IncPraiseNum(){

   this->praiseNum++;
}

//重载运算符
QTextStream & operator << (QTextStream &out, Answer &w)
{
    out << w.ID << '\n' << w.founderID << '\n' << w.content << '\n' << w.date << '\n' << QString::number(w.praiseNum,10) << '\n' << w.belongQuestionID << '\n';
    return out;
}

//重载运算符
QTextStream & operator >> (QTextStream &in, Answer &w)
{
    w.ID=in.readLine();
    w.founderID=in.readLine();
    w.content=in.readLine();
    w.date=in.readLine();
    w.praiseNum=in.readLine().toInt();
    w.belongQuestionID=in.readLine().toInt();
    return in;
}

void Answer::Print()
{
    qDebug() << "Answer::Print." << endl;
}
