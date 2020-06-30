#ifndef USER_H
#define USER_H
#include"total.h"
#include "question.h"

class User
{
    friend class Searcher;
    friend class Answer;
    friend class Question;
    friend class LoaderAndSaver;
    friend class Operation;
    friend class Question;
private:
    QString ID;
    QString password;
    int fansNum;//粉丝数
    int focusNum;//偶像数
    int noticeNum;//关注的问题数
    int questionNum;//提出的问题数
    int userAnswerNum;//回答的问题数
public:
    User();
    User(QString id,QString passwordd);
    QString GetID();
    QString GetName();
    QString GetPassword();
    int GetFansNum();
    int GetFocusNum();
    int GetUserAnswerNum();
    int GetNoticeNum();
    int GetQuestionNum();
    vector<QString> focusID;//关注的用户ID列表
    vector<QString> fansID;//粉丝用户ID列表
    vector<QString> noticeQuestionID;//关注的问题ID列表
    vector<QString> askQuestionID;//提出的问题ID列表
    vector<QString> answerQuestionID;//回答的问题ID列表
    void IncFansNum();
    void IncFocusNum();
    void IncUserAnswerNum();
    void IncNoticeNum();
    void IncQuestionNum();
    friend QTextStream & operator << (QTextStream &out, User &u);
    friend QTextStream & operator >> (QTextStream &in, User &u);
};

#endif // USER_H
