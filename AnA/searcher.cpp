#include "searcher.h"
#include <QDate>
/*Searcher类的函数定义*/

//按ID查找用户
vector<User>::iterator  Searcher::searchUserById(QString id)
{
    vector<User>::iterator iter;
    for (iter=userVector.begin();iter!=userVector.end()&&iter->ID!=id;iter++){};
    return iter;
}

//按问题ID查找问题
vector<Question>::iterator  Searcher::searchQuestionById(QString id)
{
    vector<Question>::iterator iter;
    for (iter=questionVector.begin();iter!=questionVector.end()&&iter->GetID()!=id;iter++){};
    return iter;
}

//按答案ID查找答案
vector<Answer>::iterator  Searcher::searchAnswerById(QString id)
{
    vector<Answer>::iterator iter;
    for (iter=answerVector.begin();iter!=answerVector.end()&&iter->GetID()!=id;iter++){};
    return iter;
}

//根据问题得到创建者粉丝数（在问题详细页面得到创建者粉丝数）
int Searcher::GetFansNumByQuestionVectorNum(int j)
{
    vector<User>::iterator iter;
    QString id;
    id=questionVector[j].GetFounderID();
    iter=this->searchUserById(id);
    if(iter==userVector.end())
    {
        QMessageBox::information(NULL,"","I'am sorry,didn't found this founder. @.@",QMessageBox::Yes);
        return -1;
    }
    return iter->GetFansNum();
}

//在字符串数组中查找是否存在一个字符串
int Searcher::IfIn(QString string,vector<QString> v){
    vector<QString>::iterator iter;
    int i=0;
    for (iter=v.begin();iter!=v.end();iter++){
        if(*iter==string) i++;
    };
    return i;
}


void Searcher::searchQuestion()
{}

vector<Question> Searcher::searchQuestion(QString str,int j ){
    vector<Question> newVector;
    int i;
    if(j==2){//按标题
        for(i=0;i<questionVector.size();i++)
        {
            if(questionVector[i].GetTitle().indexOf(str)!=-1)
            {
                newVector.push_back(questionVector[i]);
            }
        }
    }
    else //j=1按日期
    {
        for(i=0;i<questionVector.size();i++)
        {
            if(questionVector[i].GetDate().indexOf(str)!=-1){
                newVector.push_back(questionVector[i]);}
        }
    }
    return newVector;
}


vector<Question> Searcher::searchQuestion(QString title,QString date ){
    vector<Question> newVector;
    int i;
    for(i=0;i<questionVector.size();i++)
    {
        if(questionVector[i].GetTitle().indexOf(title)!=-1&&questionVector[i].GetDate().indexOf(date)!=-1)
        {
            newVector.push_back(questionVector[i]);
        }
    }
    return newVector;

}
/*
vector<Question> Searcher::searchQuestion(QString datestart,QString dateend,int j ){
    QDate t1, t2;
    t1 = QDateTime::fromString(datestart, "yyyy-MM-dd hh:mm:ss");
    t2 = QDateTime::fromString(datestart, "yyyy-MM-dd hh:mm:ss");
    vector<Question> newVector;
    int i;
    for(i=0;i<questionVector.size();i++)
    {
        if(questionVector[i].GetDate()<=dateend&&questionVector[i].GetDate()>=datestart)
        {
            newVector.push_back(questionVector[i]);
        }
    }
    return newVector;

}
*/
