#ifndef OPERATION_H
#define OPERATION_H

#include "searcher.h"
#include "total.h"
#include  "user.h"
#include <QSet>
#include <QMap>
#include <QVector>
#include <QList>
#include <QString>

class Operation
{
    friend class Answer;
    friend class Question;
    friend class LoaderAndSaver;
    friend class User;
    friend class Searcher;
public:
    int login(QString userIdString,QString passwordString);//登录
    void AddLike(int curQuestion);//当前问题序号
    void AddNotice(int curQuestion);//当前问题序号
    void IncPraiseByQueAndAnsNum(int curQuestion,int row);
    void ShowFouslist(QString ID);
    void ShowLikeList(QString ID);
    QString GetTime();
    string int_to_str(int x);

};

extern Operation* operation;

#endif // OPERATION_H
