#ifndef SEARCHER_H
#define SEARCHER_H
#include <QSet>
#include <QMap>
#include <QVector>
#include <QList>
#include <QString>
#include "operation.h"
#include "total.h"
#include "user.h"
#include "question.h"
#include "answer.h"
using namespace std;
class Searcher
{

    friend class Answer;
    friend class Question;
    friend class LoaderAndSaver;
    friend class User;
    friend class Operation;

 public:
   vector<User>::iterator  searchUserById(QString id);//按用户ID查找用户
   vector<Question>::iterator searchQuestionById(QString id);//按问题ID查找问题
   vector<Answer>::iterator  searchAnswerById(QString id);//按回答ID查找回答
   int GetFansNumByQuestionVectorNum(int j);//根据问题找到创建者的粉丝数
   int IfIn(QString string,vector<QString> v);//在vector<QStsing>中查找是否存在某一个元素
   void searchQuestion();//Date和标题都为空
   vector<Question> searchQuestion(QString,int);//int 表示1-按Date 2-按标题
   vector<Question>  searchQuestion(QString,QString);//表示按Date和标题
   //vector<Question>  searchQuestion(QString,Qstring,int j);//按时间范围搜索
 private:

};

#endif // SEARCHER_H
