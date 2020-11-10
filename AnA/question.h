#ifndef QUESTION_H
#define QUESTION_H
#include "basicinfo.h"
#include "user.h"
#include "operation.h"

class Question: public BasicInfo
{friend class AskDialog;
    friend class Searcher;
    friend class Answer;
    friend class LoaderAndSaver;
    friend class User;
private:
    QString title;
    int answerNum;//有多少回答
    int noticeNum;//被多少人关注
public:
    Question();
    Question(QString titleText,QString contentText);//用于提问时新建
    Question(QString questionTitle,QString questionContent,QString founderID,QString date);//用于文本读入时新建
    QString GetTitle();
    int GetAnswerNum();
    int GetNoticeNum();
    void IncAnswerNum();
    void IncNoticeNum();
    friend QTextStream & operator << (QTextStream &out, Question &q);
    friend QTextStream & operator >> (QTextStream &in, Question &q);
    void virtual Print();
    vector<QString> accordAnswerVector;//该问题对应的答案ID

};

#endif // QUESTION_H
